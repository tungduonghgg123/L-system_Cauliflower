#include <iostream>
#include "cauliflower.h"
#include <GL/glut.h>
#include<cmath>

#define DIS_CAM_TO_MODE 10

using namespace std;

cauliflower flower;

//xampleflower flower;
float g_x = 0.0;
float g_z = 0.0;
float g_x_origin = 0.0;
bool g_is_rotate = false;
float g_angle = 0.0;
float delta_angle = 0.0;
void display()
{
    glClearColor(255, 255, 255, 0); // Set background color to ưhite and opaque
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);         // Clear the color buffer (background)
    glLoadIdentity();
    gluLookAt(g_x, 1.0, g_z, 0, 0, 0, 0, 1, 0);
    glPushMatrix();
    flower.turtle3D();
    glPopMatrix();
    glFlush(); // Render now
    glutPostRedisplay();
}
void init()
{
    glClearColor(255, 255, 255, 0);
    glEnable(GL_DEPTH_TEST);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    GLfloat light_pos [] = {0.0, 0.0, 1.0, 0.0};
    glLightfv(GL_LIGHT0, GL_POSITION, light_pos);

    GLfloat ambient [] = {1.0, 0.0, 0.0, 1.0};
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);

    GLfloat diff_use [] = {0.0, 1.0, 0.0, 1.0};
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);

    GLfloat specular[] = {0, 255, 255, 1.0};
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);

    GLfloat shininess = 30.0f;
    glMateriali(GL_FRONT, GL_SHININESS, shininess);

    g_x = DIS_CAM_TO_MODE*sin(g_angle);
    g_z = DIS_CAM_TO_MODE*cos(g_angle);
}
void MouseButton(int type_button, int state, int x, int y)
{
    if (type_button == GLUT_LEFT_BUTTON)
    {
        if (state == GLUT_DOWN)
        {
            g_x_origin = x;
            g_is_rotate = true;
        }
        else
        {
           g_is_rotate = false;
           g_angle += delta_angle;
           g_x_origin = -1;
        }
    }
}
 void MouseMove(int x, int y)
{
    if(g_is_rotate == true)
    {
        delta_angle = (x - g_x_origin)*0.005f;
        g_x = DIS_CAM_TO_MODE*sin(g_angle + delta_angle);
        g_z = DIS_CAM_TO_MODE*cos(g_angle + delta_angle);
    }
}
void ReShape(int width, int height)
{
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    float ratio = (float)width / (float)height;
    gluPerspective(45.0, ratio, 1, 100);
    // glOrtho(-10.0, 10.0, -10.0, 10.0, 10.0, -10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


int main(int argc, char **argv)
{
    for (int i = 0; i < 4; i++)
    {
        flower.generate();
    }
    //flower.getSentence();
    glutInit(&argc, argv);                 // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    init();
    glutDisplayFunc(display);              // Register display callback handler for window re-paint
    glutReshapeFunc(ReShape);

    glutMouseFunc(MouseButton);
    glutMotionFunc(MouseMove);
    glutMainLoop();                       // Enter the event-processing loop
    return 0;
}
