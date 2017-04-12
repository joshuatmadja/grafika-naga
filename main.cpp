#include <iostream>
#include <GL/glew.h>
#include "Display.h"
#include "Shader.h"
#include "Mesh.h"

using namespace std;
using namespace glm;

int main() {
    Display display(800, 600, "Dragon");
    Vertex vertices[] = {   Vertex(vec3(-0.5, -0.5, 0)),
                            Vertex(vec3(0, 0.5, 0)),
                            Vertex(vec3(0.5, -0.5, 0)),  };

    Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));

    Shader red_shader("./res/redShader");
    Shader green_shader("./res/greenShader");

    while (!display.IsClosed()) {
        display.Clear(0.0f, 0.15f, 0.3f, 1.0f);
        red_shader.Bind();
        mesh.Draw();

        display.Update();
    }

    cout << "Hello world!" << endl;
    return 0;
}
