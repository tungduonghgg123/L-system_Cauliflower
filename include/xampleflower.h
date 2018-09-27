#include<iostream>
#include<map>
#include<vector>
#include <GL/glut.h> 
#include<utility.h>
using namespace std;
class xampleflower {
    private:
        char anxiom;
        map<char, string> rules;
        string sentence;
    public:
        xampleflower() {
            anxiom = 'F';
            sentence.push_back(anxiom);
             rules['F'] = "FF+[+F-F-F]-[-F+F+F]";
            
    

        }
        void generate();
        void getSentence();
        void turtle2D();
};