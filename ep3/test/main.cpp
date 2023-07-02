#include <gan.h>
#include <GLFW/glfw3.h>

int main(int argc, char **argv)
{
    gan::greet();
    int g = gan::add(5,6);

    GLFWwindow *window;
    
    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    // Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // // Draw gears
        // draw();

        // // Update animation
        // animate();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();


    std::cout<<g<<std::endl;
    return 0;
}