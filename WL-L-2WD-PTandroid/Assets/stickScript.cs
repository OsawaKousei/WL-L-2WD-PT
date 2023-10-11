using UnityEngine;
using UnityEngine.InputSystem;
using ROS2;

public class stickScript : MonoBehaviour
{
    private ROS2UnityComponent ros2Unity;
    private ROS2Node ros2Node;
    private IPublisher<geometry_msgs.msg.Twist> twist_pub;
    // シーン読み込み時に呼び出される関数
    void Start()
    {
        TryGetComponent(out ros2Unity);
    }

    // フレーム更新時に呼び出される関数
    void Update()
    {
        if (ros2Unity.Ok())
        {
            if (ros2Node == null)
            {
                // Nodeの名前を指定する
                ros2Node = ros2Unity.CreateNode("StickAndroid");
                // トピックの名前と型を指定する
                twist_pub = ros2Node.CreatePublisher<geometry_msgs.msg.Twist>("StickValue");
            }
            geometry_msgs.msg.Twist msg = new geometry_msgs.msg.Twist();
            var current = Gamepad.current;
            var input_vec = current.leftStick.ReadValue();
            msg.Linear.X = input_vec.x;
            msg.Linear.Y = input_vec.y;
            twist_pub.Publish(msg);
        }
    }
}