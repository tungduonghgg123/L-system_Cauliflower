#include "xampleflower.h"

void xampleflower::generate()
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

void xampleflower::getSentence()
{
    for (int i = 0; i <= sentence.size(); i++)
    {
        cout << sentence[i];
    }
    cout << endl;
}
void xampleflower::turtle2D()
{
    float line = 0.1f;
    float scaleRate = 0.3f;
    for (int i = 0; i < sentence.size(); i++)
    {
        char current = sentence[i];
        
        GLdouble angle = 15;
        switch (current)
        {
        case 'F':
        {
            drawLine(0,0,0,line);
            glTranslatef(0,line,0);

            break;
        }
        case '[':
        {
            //line *=scaleRate;
            glPushMatrix();
            break;
        }
        case ']':
        {
            //line /=scaleRate;
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
        }
    }
}

