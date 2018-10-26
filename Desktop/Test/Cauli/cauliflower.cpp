#include "cauliflower.h"
#include <GL/glut.h>
#include<cmath>

void cauliflower::generate()
{
    string nextS;
    for (int i = 0; i <= sentence.size(); i++)
    {
        char current = sentence[i];
        if (rules.find(current) != rules.end())
        {
            nextS += rules[current];
        }
        else
            nextS += current;
    }
    sentence = nextS;
}

void cauliflower::getSentence()
{
    for (int i = 0; i <= sentence.size(); i++)
    {
        cout << sentence[i];
    }
    cout << endl;
}
void cauliflower::turtle3D()
{
    float l = 0.5f;
    GLdouble angle = 45;
    for (int i = 0; i < sentence.size(); i++)
    {
        char current = sentence[i];
        switch(current)
        {
            case 'F':
            {
                glutSolidCube(2*l);
                glTranslatef(0,l,0);
                break;
            }
            case '[':
            {
                l /= sqrt(2);
                glPushMatrix();
                break;
            }
            case ']':
            {
                l *= sqrt(2);
                glPopMatrix();
                break;
            }

            case '+':
            {
                glRotatef(-angle, 1, 0, 1);
                break;
            }
            case '-':
            {
                glRotatef(angle, 1, 0, 1);
                break;
            }
            case '.':
            {
                glRotatef(angle, -1, 0, 1);
                break;
            }
            case ',':
            {
                glRotatef(-angle, -1, 0, 1);
                break;
            }
            case 'm':
            {
                glTranslatef(0,(1+sqrt(2))*l,0);
                break;
            }
        }
    }
}

