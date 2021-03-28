#include <iostream>
using namespace std;
int Add(int a,int b);
float Add(float a,float b);

int main(void){
    cout<<Add(1,2)<<endl;
    cout<<Add(1.200000,1.300000)<<endl;

    return 0;
}

int Add(int a,int b){
    return a+b;
}

float Add(float a,float b){
    return a+b;
}