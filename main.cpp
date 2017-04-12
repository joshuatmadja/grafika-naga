#include <iostream>
#include <GL/glew.h>
#include "Display.h"
#include "Shader.h"
#include "Mesh.h"

using namespace std;
using namespace glm;

float foo(int x){
    int m = -400;
    int n = 400;
//    return (x/n)+m;
    return (x+m)/n;
}

float foo2(int y){
    int m = -300;
    int n = 300;
    //return ((-y)/n)+m;
    return (y+m)/-n;
}

int main() {
    Display display(800, 600, "Dragon");
    Vertex head_vertices[] =    {
/*
Vertex(vec3(-0.2325, 0.956667, 0)),
Vertex(vec3(-0.6825, 0.826667, 0)),
Vertex(vec3(-1, 0.36, 0)),
Vertex(vec3(-0.925, 0.36, 0)),
Vertex(vec3(-0.825, -0.0366667, 0)),
Vertex(vec3(-0.7575, 0.0766667, 0)),
Vertex(vec3(-0.4875, -0.263333, 0)),
Vertex(vec3(-0.6125, 0.206667, 0)),
Vertex(vec3(-0.3825, 0.01, 0)),
Vertex(vec3(-0.2875, 0.116667, 0)),
Vertex(vec3(-0.185, -0, 0)),
Vertex(vec3(-0.1225, 0.0333333, 0)),
Vertex(vec3(0.15, -0.526667, 0)),
Vertex(vec3(-0.0425, -0.806667, 0)),
Vertex(vec3(-0.215, -0.65, 0)),
Vertex(vec3(-0.0775, -0.86, 0)),
Vertex(vec3(0.1525, -0.77, 0)),
Vertex(vec3(0.2325, -0.46, 0)),
Vertex(vec3(0.08, -0.03, 0)),
Vertex(vec3(0.125, 0.0333333, 0)),
Vertex(vec3(0.2, 0.0133333, 0)),
Vertex(vec3(0.2775, 0.116667, 0)),
Vertex(vec3(0.38, 0.0133333, 0)),
Vertex(vec3(0.6025, 0.206667, 0)),
Vertex(vec3(0.51, -0.276667, 0)),
Vertex(vec3(0.755, 0.08, 0)),
Vertex(vec3(0.82, -0.03, 0)),
Vertex(vec3(0.905, 0.353333, 0)),
Vertex(vec3(0.9925, 0.353333, 0)),
Vertex(vec3(0.6, 0.883333, 0)),
Vertex(vec3(0.2325, 0.956667, 0)),
Vertex(vec3(0.305, 0.783333, 0)),
Vertex(vec3(0.1025, 0.43, 0)),
Vertex(vec3(-0.045, 0.573333, 0)),
Vertex(vec3(0.05, 0.673333, 0)),
Vertex(vec3(0.15, 0.563333, 0)),
Vertex(vec3(0.1625, 0.576667, 0)),
Vertex(vec3(0.1125, 0.706667, 0)),
Vertex(vec3(0.0525, 0.77, 0)),
Vertex(vec3(-0.0925, 0.703333, 0)),
Vertex(vec3(-0.165, 0.446667, 0)),
Vertex(vec3(-0.3125, 0.746667, 0)),
*/
/*
                                    Vertex(vec3(foo(305), foo2(15), 0)),
                                    Vertex(vec3(foo(0), foo2(195), 0)),
                                    Vertex(vec3(foo(32), foo2(194), 0)),
                                    Vertex(vec3(foo(70), foo2(315), 0)),
                                    Vertex(vec3(foo(97), foo2(280), 0)),
                                    Vertex(vec3(foo(205), foo2(380), 0)),
                                    Vertex(vec3(foo(154), foo2(240), 0)),
                                    Vertex(vec3(foo(250), foo2(300), 0)),
                                    Vertex(vec3(foo(285), foo2(265), 0)),
                                    Vertex(vec3(foo(320), foo2(295), 0)),
                                    Vertex(vec3(foo(350), foo2(290), 0)),
                                    Vertex(vec3(foo(455), foo2(445), 0)),
                                    Vertex(vec3(foo(440), foo2(515), 0)),
                                    Vertex(vec3(foo(330), foo2(525), 0)),
                                    Vertex(vec3(foo(390), foo2(560), 0)),
                                    Vertex(vec3(foo(475), foo2(515), 0)),
                                    Vertex(vec3(foo(490), foo2(440), 0)),
                                    Vertex(vec3(foo(430), foo2(315), 0)),
                                    Vertex(vec3(foo(450), foo2(280), 0)),
                                    Vertex(vec3(foo(475), foo2(295), 0)),
                                    Vertex(vec3(foo(510), foo2(265), 0)),
                                    Vertex(vec3(foo(555), foo2(295), 0)),
                                    Vertex(vec3(foo(645), foo2(240), 0)),
                                    Vertex(vec3(foo(600), foo2(380), 0)),
                                    Vertex(vec3(foo(700), foo2(280), 0)),
                                    Vertex(vec3(foo(730), foo2(310), 0)),
                                    Vertex(vec3(foo(760), foo2(195), 0)),
                                    Vertex(vec3(foo(800), foo2(190), 0)),
                                    Vertex(vec3(foo(490), foo2(15), 0)),
                                    Vertex(vec3(foo(520), foo2(80), 0)),
                                    Vertex(vec3(foo(440), foo2(175), 0)),
                                    Vertex(vec3(foo(385), foo2(130), 0)),
                                    Vertex(vec3(foo(390), foo2(110), 0)),
                                    Vertex(vec3(foo(420), foo2(100), 0)),
                                    Vertex(vec3(foo(460), foo2(135), 0)),
                                    Vertex(vec3(foo(465), foo2(130), 0)),
                                    Vertex(vec3(foo(440), foo2(90), 0)),
                                    Vertex(vec3(foo(420), foo2(70), 0)),
                                    Vertex(vec3(foo(365), foo2(90), 0)),
                                    Vertex(vec3(foo(340), foo2(165), 0)),
                                    Vertex(vec3(foo(280), foo2(70), 0)),
*/

                                    Vertex(vec3(0, 0, 0)),
                                    Vertex(vec3(-0.25, 0.0, 0)),
                                    Vertex(vec3(-0.25, 0.25, 0)),
                                    Vertex(vec3(0.0, 0.25, 0)),
//*/
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

    Vertex wing_vertices[] =    {
                                    Vertex(vec3(0, 0, 0)),
                                    Vertex(vec3(0.5, 0.5, 0)),
                                    Vertex(vec3(0.375, 0.25, 0)),
                                    Vertex(vec3(0.5, 0, 0)),
                                    Vertex(vec3(0.375, -0.25, 0)),
                                    Vertex(vec3(0.5, -0.5, 0)),
                                    Vertex(vec3(0.055, -0.4, 0)),
                                };

    Vertex hands_vertices[] =   {
                                    Vertex(vec3(0.055, -0.4, 0)),
                                    Vertex(vec3(-0.055, -0.7, 0)),
                                    Vertex(vec3(-0.055, -0.1, 0)),
                                };

    Vertex foots_vertices[] =   {
                                    Vertex(vec3(0, -0.125, 0)),
                                    Vertex(vec3(-0.15, -0.13, 0)),
                                    Vertex(vec3(0, -0.2, 0)),

                                    Vertex(vec3(0, -0.225, 0)),
                                    Vertex(vec3(-0.25, -0.23, 0)),
                                    Vertex(vec3(0, -0.2, 0)),
                                };
    Vertex horns_vertices[] =   {
                                    Vertex(vec3(-0.25, 0.25, 0)),
                                    Vertex(vec3(-0.125, 0.375, 0)),
                                    Vertex(vec3(-0.2, 0.25, 0)),

                                    Vertex(vec3(-0.075, 0.375, 0)),
                                    Vertex(vec3(-0.15, 0.25, 0)),
                                    //Vertex(vec3(0, -0.225, 0)),
                                    //Vertex(vec3(-0.25, -0.23, 0)),
                                    //Vertex(vec3(0, -0.2, 0)),
                                };

    Mesh head(head_vertices, sizeof(head_vertices)/sizeof(head_vertices[0]));
    Mesh eye(eye_vertices, sizeof(eye_vertices)/sizeof(eye_vertices[0]));
    Mesh body(body_vertices, sizeof(body_vertices)/sizeof(body_vertices[0]));
    Mesh mouth(mouth_vertices, sizeof(mouth_vertices)/sizeof(mouth_vertices[0]));
    Mesh wing(wing_vertices, sizeof(wing_vertices)/sizeof(wing_vertices[0]));
    Mesh hands(hands_vertices, sizeof(hands_vertices)/sizeof(hands_vertices[0]));
    Mesh foots(foots_vertices, sizeof(foots_vertices)/sizeof(foots_vertices[0]));
    Mesh horns(horns_vertices, sizeof(horns_vertices)/sizeof(horns_vertices[0]));

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
        hands.Draw();
        foots.Draw();


        red_shader.Bind();
        eye.Draw();
        horns.Draw();

        black_shader.Bind();
        mouth.Draw();

        blue_shader.Bind();
        wing.Draw();

        display.Update();
    }

    return 0;
}
