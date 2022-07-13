#include <GL\glew.h>     //Include GLEW for function-pointers etc.
#include <GLFW\GLFW3.h>  //Include GLFW for windows, context etc.
                         //Important note: GLEW must NEVER be included after 
                         //gl.h is already included(which is included in glew.h 
                         //and glfw3.h) so if you want to include one of these
                         //headers again, wrap them
                         //into #ifndef __gl_h_ directives just to be sure

GLFWwindow* window;      //This is the GLFW handle for a window, it is used in several 
                         //GLFW functions, so make sure it is accessible

void createWindow()
{
    glewExperimental = GL_TRUE; //This is required to use functions not included 
                                //in opengl.lib

    if(!glfwInit())             //Inititalizes the library
        return;

    glfwDefaultWindowHints();   //See second example

    window = glfwCreateWindow(WIDTH, HEIGHT, title, NULL, NULL);
    //Creates a window with the following parameters:
    // + int width: Width of the window to be created
    // + int height: Height of the window to be created
    // + const char* title: Title of the window to be created
    // + GLFWmonitor* monitor: If this parameter is non-NULL, the window will be 
    //   created in fullscreen mode, covering the specified monitor. Monitors can be  
    //   queried using either glfwGetPrimaryMonitor() or glfwGetMonitors()
    // + GLFWwindow* share: For more information about this parameter, please
    //   consult the documentation

    glfwMakeContextCurrent(window);
    //Creates a OpenGL context for the specified window
    glfwSwapInterval(0);
    //Specifies how many monitor-refreshes GLFW should wait, before swapping the 
    //backbuffer and the displayed frame. Also know as V-Sync
    glewInit();
    //Initializes GLEW
}
