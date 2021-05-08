#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

class Shape{  //基类
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

    /*void area(){
        cout<<pow(length,2);
    }*/
};

class rect :public Shape{
private:
    float plength;
public:
    rect(float plength){
        Shape(plength);
        cout<<"rect Destructed"<<endl;
    }

    void area(){
        float area;
        area = pow(plength,2);
        cout<<area<<endl;
    }
};

class circle:public Shape{
    circle();
};


int main(){
    return 0;
}