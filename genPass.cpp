#include<iostream>
using namespace std;
void genNumber() {
    int a[] = {1,2,3};
    int b[] = {7,8,9};
    for(int i =0; i<3;i++) {
        for(int j = 0; j<3;j++)
            {
                if(i!= j  )
                    cout<<a[i]<<a[j]<<b[i]<<b[j]<<endl;
            }
                
    }
}
int main(int argc, char const *argv[])
{
    genNumber();
    return 0;
}
