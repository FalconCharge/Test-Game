#include <GL/glew.h>
#include <iostream>

int main() {
    std::cout << "GLEW version: " << glewGetString(GLEW_VERSION) << std::endl;
    return 0;
}


/*
#include "gl/glew.h"
#include "W_App.h"

// Subclass wolf::App and implement update and render
class MyGameApp : public wolf::App
{
public:
    MyGameApp() : wolf::App("My Game Window") {}

    void update(float dt) override
    {
        // Game update logic here
        // For example: check inputs, update game state
        if (isKeyDown(GLFW_KEY_ESCAPE))
            glfwSetWindowShouldClose(getWindow(), GLFW_TRUE);
    }

    void render() override
    {
        // Rendering code here
        glClearColor(0.1f, 0.1f, 0.2f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        // Draw stuff ...
    }
};

int main()
{
    MyGameApp app;
    app.run();
    return 0;
}
*/