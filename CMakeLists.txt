# Specify minimum version required
cmake_minimum_required(VERSION 3.4 FATAL_ERROR)

# Specify project and C++
project(cpp_cache LANGUAGES CXX)

# Set C++ version
set(CMAKE_CXX_STANDARD 20)

find_package(glfw3 3.3 REQUIRED)
find_package(OpenGL REQUIRED)

# Add program target called test_matrix_tran
add_executable(gg glfw.cpp)

target_link_libraries(gg OpenGL::GL)
