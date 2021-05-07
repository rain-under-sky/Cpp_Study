#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

class Shape{
private:
    float length;
public:
    Shape(float plength){
        length = plength;
        cout<<"Shape Constructed"<<endl;
    }

    ~Shape(){
        cout<<"Shape Destructed"<<endl;
    }

    void area(){
        cout<<pow(length,2);
    }
};

class rect :public Shape{
public:
    rect(float plength){
        Shape(plength);
        cout<<"rect Destructed"<<endl;
    }

    void
};