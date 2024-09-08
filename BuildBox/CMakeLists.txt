file(GLOB_RECURSE SOURCES "*.cpp" "*.hpp")

add_executable(BuildBox ${SOURCES})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET BuildBox PROPERTY CXX_STANDARD 20)
endif()

target_include_directories(BuildBox PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
