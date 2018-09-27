#include <iostream>
#include "xampleflower.h"
#include <GL/glut.h>

using namespace std;

xampleflower flower;


void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glPushMatrix();
    glTranslatef(0, -1, 0);
    flower.turtle2D();
    glPopMatrix();

    glFlush(); // Render now
}
int main(int argc, char **argv)
{
    for (int i = 0; i < 3; i++)
    {
        flower.generate();
    }

    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutInitWindowSize(320, 320);          // Set the window's initial width & height
    glutInitWindowPosition(50, 50);        // Position the window's initial top-left corner
    glutDisplayFunc(display);              // Register display callback handler for window re-paint
    glutMainLoop();                        // Enter the event-processing loop

    return 0;
}
