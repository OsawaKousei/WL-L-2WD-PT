# generated from ament_cmake_export_assemblies/cmake/template/ament_cmake_export_assemblies.cmake.in

set(_exported_assemblies_dll "${custom_message_unity_DIR}/../../../lib/dotnet/custom_message_unity_assembly.dll")

# append absolute assemblies to custom_message_unity_ASSEMBLIES_DLL
# warn about not existing paths
if(NOT "${_exported_assemblies_dll} " STREQUAL " ")
  find_package(ament_cmake_core QUIET REQUIRED)
  foreach(_exported_assembly_dll ${_exported_assemblies_dll})
    if(NOT EXISTS "${_exported_assembly_dll}")
      message(WARNING "Package 'custom_message_unity' exports the DLL assembly '${_exported_assembly_dll}' which doesn't exist")
    endif()
    normalize_path(_exported_assembly_dll "${_exported_assembly_dll}")
    list(APPEND custom_message_unity_ASSEMBLIES_DLL "${_exported_assembly_dll}")
  endforeach()
endif()

set(_exported_assemblies_nuget "")

# append absolute assemblies to custom_message_unity_ASSEMBLIES_NUGET
# warn about not existing paths
if(NOT "${_exported_assemblies_nuget} " STREQUAL " ")
  find_package(ament_cmake_core QUIET REQUIRED)
  foreach(_exported_assembly_nuget ${_exported_assemblies_nuget})
    if(NOT EXISTS "${_exported_assembly_nuget}")
      message(WARNING "Package 'custom_message_unity' exports the NuGet assembly '${_exported_assembly_nuget}' which doesn't exist")
    endif()
    normalize_path(_exported_assembly_nuget "${_exported_assembly_nuget}")
    list(APPEND custom_message_unity_ASSEMBLIES_NUGET "${_exported_assembly_nuget}")
  endforeach()
endif()
