# Specify minimum version required
cmake_minimum_required(VERSION 3.4 FATAL_ERROR)

# Specify project and C++
project(cpp_cache LANGUAGES CXX)

# Set C++ version
set(CMAKE_CXX_STANDARD 20)

# Add program target 
add_executable(demo glfw.cpp)

find_package(glfw3 3.2 REQUIRED)
target_link_libraries(demo glfw)
find_package(OpenGL REQUIRED)
target_link_libraries(demo OpenGL::GL)
find_package(GLEW REQUIRED)
target_link_libraries(demo ${GLEW_LIBRARIES})

