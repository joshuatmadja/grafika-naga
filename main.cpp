#include <iostream>
#include <GL/glew.h>
#include "Display.h"
#include "Shader.h"
#include "Mesh.h"

using namespace std;
using namespace glm;

int main() {
    Display display(800, 600, "Dragon");

    Vertex head_vertices[] =    {
                                    Vertex(vec3(0, 0, 0)),
                                    Vertex(vec3(-0.25, 0, 0)),
                                    Vertex(vec3(-0.25, 0.25, 0)),

                                    Vertex(vec3(0, 0, 0)),
                                    Vertex(vec3(-0.25, 0.25, 0)),
                                    Vertex(vec3(0, 0.25, 0)),
                                };


    Vertex eye_vertices[] =     {
                                    Vertex(vec3(-0.2, 0.15, 0)),
                                    Vertex(vec3(-0.15, 0.2, 0)),
                                    Vertex(vec3(-0.17, 0.15, 0)),
                                };

    Vertex body_vertices[] =    {
                                    Vertex(vec3(0, 0, 0)),
                                    Vertex(vec3(0.1, -0.7, 0)),
                                    Vertex(vec3(-0.1, 0, 0)),
                                };

    Vertex mouth_vertices[] =   {
                                    Vertex(vec3(-0.25, 0, 0)),
                                    Vertex(vec3(-0.25, 0.13, 0)),
                                    Vertex(vec3(-0.15, 0.05, 0)),
                                };

    Mesh head(head_vertices, sizeof(head_vertices)/sizeof(head_vertices[0]));
    Mesh eye(eye_vertices, sizeof(eye_vertices)/sizeof(eye_vertices[0]));
    Mesh body(body_vertices, sizeof(body_vertices)/sizeof(body_vertices[0]));
    Mesh mouth(mouth_vertices, sizeof(mouth_vertices)/sizeof(mouth_vertices[0]));

    Shader red_shader("./res/redShader");
    Shader green_shader("./res/greenShader");
    Shader white_shader("./res/whiteShader");
    Shader black_shader("./res/blackShader");
    Shader blue_shader("./res/blueShader");

    while (!display.IsClosed()) {
        display.Clear(0.0f, 0.15f, 0.3f, 1.0f);

        green_shader.Bind();
        head.Draw();
        body.Draw();


        red_shader.Bind();
        eye.Draw();

        black_shader.Bind();
        mouth.Draw();

        display.Update();
    }

    return 0;
}
