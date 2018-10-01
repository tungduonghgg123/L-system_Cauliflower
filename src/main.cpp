#include <iostream>
#include "xampleflower.h"
#include "cauliflower.h"
#include <GL/glut.h>

using namespace std;

cauliflower flower;

//xampleflower flower;
void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glPushMatrix();
    flower.turtle2D();
    glPopMatrix();
    glFlush(); // Render now
}
int main(int argc, char **argv)
{
    for (int i = 0; i < 10; i++)
    {
        flower.generate();
    }
    //flower.getSentence();
    glutInitWindowSize(600, 600);          
    glutInitWindowPosition(100, 100); 
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display);              // Register display callback handler for window re-paint
    glutMainLoop();                        // Enter the event-processing loop

    return 0;
}
