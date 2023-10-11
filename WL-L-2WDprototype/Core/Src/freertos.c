/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdbool.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <uxr/client/transport.h>
#include <rmw_microxrcedds_c/config.h>
#include <rmw_microros/rmw_microros.h>
#include "usart.h"
#include "dma.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"
// カスタムメッセージのインクルード
#include <custom_test_msgs/srv/add_three_ints.h>


/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */
// エラーハンドリングのためのマクロを設定
#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Aborting.\n",__LINE__,(int)temp_rc);}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Continuing.\n",__LINE__,(int)temp_rc);}}
/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */
// サービスのリクエストとレスポンスの構造体を定義
custom_test_msgs__srv__AddThreeInts_Request req;
custom_test_msgs__srv__AddThreeInts_Response res;

bool cubemx_transport_open(struct uxrCustomTransport * transport);
bool cubemx_transport_close(struct uxrCustomTransport * transport);
size_t cubemx_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
size_t cubemx_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);
/* USER CODE END Variables */
osThreadId defaultTaskHandle;
uint32_t defaultTaskBuffer[ 512 ];
osStaticThreadDef_t defaultTaskControlBlock;
osThreadId micoroROSTaskHandle;
uint32_t micoroROSTaskBuffer[ 3000 ];
osStaticThreadDef_t micoroROSTaskControlBlock;

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */
void * microros_allocate(size_t size, void * state);
void microros_deallocate(void * pointer, void * state);
void * microros_reallocate(void * pointer, size_t size, void * state);
void * microros_zero_allocate(size_t number_of_elements, size_t size_of_element, void * state);

// サービスのコールバック関数を定義
void service_callback(const void *request, void *response)
{
	// リクエストとレスポンスを適切な型にキャスト
	custom_test_msgs__srv__AddThreeInts_Request *_req = (custom_test_msgs__srv__AddThreeInts_Request *)request;
	custom_test_msgs__srv__AddThreeInts_Response *_res = (custom_test_msgs__srv__AddThreeInts_Response *)response;

	printf("a: %d\r\nb: %d",_req->a,_req->b);

	if(_req->a == 1){

		HAL_GPIO_WritePin(GPIOB, M11_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, M12_Pin, GPIO_PIN_SET);

		HAL_GPIO_WritePin(GPIOB, M21_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, M22_Pin, GPIO_PIN_RESET);

		if(_req->b == 1){
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 200);
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_2, 300);
		}else if(_req->b == -1){
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 300);
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_2, 200);
		}else{
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 300);
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_2, 300);
		}

	}else if(_req->a == -1){

		HAL_GPIO_WritePin(GPIOB, M11_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, M12_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(GPIOB, M21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, M22_Pin, GPIO_PIN_SET);

		if(_req->b == 1){
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 200);
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_2, 300);
		}else if(_req->b == -1){
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 300);
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_2, 200);
		}else{
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 300);
			__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_2, 300);
		}

	}else{
		HAL_GPIO_WritePin(GPIOB, M11_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, M12_Pin, GPIO_PIN_RESET);

		HAL_GPIO_WritePin(GPIOB, M21_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, M22_Pin, GPIO_PIN_RESET);
	}
	// レスポンスに合計値をセット
	_res->sum = 0;
}

/* USER CODE END FunctionPrototypes */

void StartDefaultTask(void const * argument);
void StartMicroROSTask(void const * argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/* GetIdleTaskMemory prototype (linked to static allocation support) */
void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize );

/* USER CODE BEGIN GET_IDLE_TASK_MEMORY */
static StaticTask_t xIdleTaskTCBBuffer;
static StackType_t xIdleStack[configMINIMAL_STACK_SIZE];

void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize )
{
  *ppxIdleTaskTCBBuffer = &xIdleTaskTCBBuffer;
  *ppxIdleTaskStackBuffer = &xIdleStack[0];
  *pulIdleTaskStackSize = configMINIMAL_STACK_SIZE;
  /* place for user code */
}
/* USER CODE END GET_IDLE_TASK_MEMORY */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of defaultTask */
  osThreadStaticDef(defaultTask, StartDefaultTask, osPriorityNormal, 0, 512, defaultTaskBuffer, &defaultTaskControlBlock);
  defaultTaskHandle = osThreadCreate(osThread(defaultTask), NULL);

  /* definition and creation of micoroROSTask */
  osThreadStaticDef(micoroROSTask, StartMicroROSTask, osPriorityHigh, 0, 3000, micoroROSTaskBuffer, &micoroROSTaskControlBlock);
  micoroROSTaskHandle = osThreadCreate(osThread(micoroROSTask), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */

  /* USER CODE END RTOS_THREADS */

}

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void const * argument)
{
  /* USER CODE BEGIN StartDefaultTask */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartDefaultTask */
}

/* USER CODE BEGIN Header_StartMicroROSTask */
/**
* @brief Function implementing the micoroROSTask thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartMicroROSTask */
void StartMicroROSTask(void const * argument)
{
  /* USER CODE BEGIN StartMicroROSTask */
	// micro-ROSの初期化
	 	printf("start microROS task\r\n");
	 	rmw_uros_set_custom_transport(
	 	    true,
	 	    (void *) &huart3,
	 	    cubemx_transport_open,
	 	    cubemx_transport_close,
	 	    cubemx_transport_write,
	 	    cubemx_transport_read);

	 	rcl_allocator_t freeRTOS_allocator = rcutils_get_zero_initialized_allocator();
	 	freeRTOS_allocator.allocate = microros_allocate;
	 	freeRTOS_allocator.deallocate = microros_deallocate;
	 	freeRTOS_allocator.reallocate = microros_reallocate;
	 	freeRTOS_allocator.zero_allocate =  microros_zero_allocate;
	 	if (!rcutils_set_default_allocator(&freeRTOS_allocator)) {
	 		printf("Error on default allocators (line %d)\r\n", __LINE__);
	 	}

	     // ここからサービスサーバの実装
	 	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	 	rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
	 	rcl_allocator_t allocator = rcl_get_default_allocator();
	 	rclc_support_t support;
	 	rcl_node_t node = rcl_get_zero_initialized_node();
	 	rcl_service_t service = rcl_get_zero_initialized_service();
	 	rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();
	 	rcl_node_options_t node_ops = rcl_node_get_default_options();

	 	RCCHECK(rcl_init_options_init(&init_options, allocator));
	     // ROS_DOMAIN_IDの設定。今回は0としてる。
	 	RCCHECK(rcl_init_options_set_domain_id(&init_options, 0));
	 	rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator);
	     // ノードの作成
	 	RCCHECK(rclc_node_init_with_options(&node, "simple_server", "", &support, &node_ops));
	     // サービスの作成
	 	RCCHECK(rclc_service_init_default(&service, &node, ROSIDL_GET_SRV_TYPE_SUPPORT(custom_test_msgs, srv, AddThreeInts), "add_three_ints"));
	     // エグゼキューターの作成
	 	RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
	     // エグゼキューターにサービスを追加
	 	RCCHECK(rclc_executor_add_service(&executor, &service, &req, &res, &service_callback));
  /* Infinite loop */
  for(;;)
  {
	  // エグゼキューターを実行してリクエストを処理
	  rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
		osDelay(1);
  }
  // 終了処理
    	RCCHECK(rcl_service_fini(&service, &node));
    	RCCHECK(rcl_node_fini(&node));
  /* USER CODE END StartMicroROSTask */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

