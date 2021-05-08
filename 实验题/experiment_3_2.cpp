#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;
class Shape
{
    float x, y;
public:
    Shape(float px, float py)
    {
        x = px;
        y = py;
        cout<<"Shape Constructed"<<endl;
    }
    ~Shape(){
        cout<<"Shape Destructed"<<endl;
    }
    float Area()
    {
        return 0;
    }
};
class rect :public Shape
{
    float w, h;
public:
    rect(float px, float py, float pw, float ph):Shape(px, py)
    {
        w = pw, h = ph;
        cout<<"rect Constructed"<<endl;
    }
    ~rect(){
        cout<<"rect Destructed"<<endl;
    }
    float Area()
    {
        return w * h;
    }
};

class circle :public Shape {
    float r;
public:
    circle(int px, int py, int pr):Shape(px, py)
    {
        r = pr;
        cout<<"circle Constructed"<<endl;
    }
    ~circle(){
        cout<<"circle Destructed"<<endl;
    }
    float Area()
    {
        return PI * pow(r,2);
    }
};
int main()
{
    rect rect(3, 4, 12, 23);
    circle r(3, 4, 12);
    cout << rect.Area() << endl;
    cout << r.Area() << endl;
}
