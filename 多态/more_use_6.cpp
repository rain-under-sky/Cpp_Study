#include <iostream>
using namespace std;

class Point{
private:
    int x,y;
public:
    Point(int px = 0,int py = 0):x(px),y(py){};
    void print();
    Point operator++();
    Point operator--();
};

void Point::print() {
    cout<<"("<<x<<","<<y<<")"<<endl;
}

Point Point::operator++() {
    x++;
    y++;
    return *this;
}

Point Point::operator--() {
    Point old = *this;
    x--;
    y--;
    return old;
}

int main(){
    Point a(3,4),b,c;
    cout<<"a的坐标:"<<endl;
    a.print();
    b=a++;
    cout<<"执行b=a++后:"<<endl;
    cout<<"a的坐标:"<<endl;
    a.print();
    cout<<"b的坐标:"<<endl;
    b.print();
    c=++a;
    cout<<"执行c=++a后:"<<endl;
    cout<<"a的坐标:"<<endl;
    a.print();
    cout<<"c的坐标:"<<endl;
    c.print();
    return 0;
}