add_executable (BuildBox "BuildBox.cpp" "BuildBox.hpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET BuildBox PROPERTY CXX_STANDARD 20)
endif()

