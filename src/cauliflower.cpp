#include "cauliflower.h"

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
void cauliflower::turtle2D()
{
    float l = 0.1f;
    float scaleRate = 0.3f;
    GLdouble angle = 45;
    for (int i = 0; i < sentence.size(); i++)
    {
        char current = sentence[i];
        switch (current)
        {
        case 'F':
        {
            drawSquare(l,l,-l,l,-l,-l,l,-l);
            glTranslatef(0,l,0);
            break;
        }
        case '[':
        {
            //line *=scaleRate;
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
            // rotate right by y axis
            
            glRotatef(-angle, 0, 0, 1);
            break;
        }
        case '-':
        {
            // rotate left by y axis
            glRotatef(angle, 0, 0, 1);
            break;
        }
        case 'm':
        {
            glTranslatef(0,2*l,0);
            break;
        }
        }
    }
}

