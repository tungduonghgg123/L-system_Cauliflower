#include<iostream>
#include<map>
#include<vector>
#include <GL/glut.h> 
#include<utility.h>
using namespace std;
class cauliflower {
    private:
        char anxiom;
        map<char, string> rules;
        string sentence;
    public:
        cauliflower() {
            //do this
            anxiom = 'F';
            sentence = anxiom;
            //sentence.push_back(anxiom);
             rules['F'] = "F[+mF][-mF]";
             
            
    

        }
        void generate();
        void getSentence();
        void turtle2D();
};