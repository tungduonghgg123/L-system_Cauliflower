#include<utility.h>


void drawLine(float x1, float x2, float y1, float y2)
{
    glBegin(GL_LINES);           // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(x1, x2);          // x, y
    glVertex2f(y1, y2);
    glEnd();
}
void drawSquare(float x1, float x2, float y1, float y2,float z1, float z2, float k1, float k2) {
    glBegin(GL_POLYGON);           // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(x1, x2);          // x, y
    glVertex2f(y1, y2);
    glVertex2f(z1, z2);
    glVertex2f(k1, k2);
    glEnd();
}