#include<iostream>
using namespace std;
class complex {
public:
    complex(int preal,int pempty){   //complex类的构造函数
        real = preal;
        empty = pempty;
    }
    complex add(complex a){   //这是一个返回值为复数的函数！！！
        numreal = real + a.real;
        numempty = empty + a.empty;

        return *this;
    }
    void display() {
        cout << numreal << "为实部" << numempty << "为虚部" << endl;

    }

private:
    int real;
    int empty;
    int numreal, numempty;
};
int main() {
    complex a(1, 2);
    complex b(1,2);

    a.add(b);
    a.display();

    return 0;
}