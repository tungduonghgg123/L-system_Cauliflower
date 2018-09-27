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
    
}

