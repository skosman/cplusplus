# Specify minimum version required
cmake_minimum_required(VERSION 3.4 FATAL_ERROR)

# Specify project and C++
project(cpp_cache LANGUAGES CXX)

# Set C++ version
set(CMAKE_CXX_STANDARD 20)

# Add program target 
add_executable(gg glfw.cpp)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(gg ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )

