#include<iostream>
using namespace std;
class Shape
{
    int x, y;
public:
    Shape(int px, int py)
    {
        x = px;
        y = py;
    }
    double getArea()
    {
        return 0;
    }
};
class rect :public Shape
{
    double w, h;
public:
    rect(int px, int py, int pw, int ph) :Shape(px, py)
    {
        w = pw, h = ph;
    }
    double getArea()
    {
        return w * h;
    }
};

class circle :public Shape {
    double r;
public:
    circle(int px, int py, int pr) :Shape(px, py)
    {
        r = pr;
    }
    double getArea()
    {
        return 3.1415 * r * r;
    }
};
int main()
{
    rect rect(3, 4, 12, 23);
    circle r(3, 4, 12);
    cout << rect.getArea() << endl;
    cout << r.getArea() << endl;
}
