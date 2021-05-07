#include<iostream>
using namespace std;
class complex {
public:
    complex(int preal,int pempty){
        real = preal;
        empty = pempty;
    }
    complex add(complex a) {
        numreal = real + a.real;
        numempty = empty + a.empty;

        return *this;
    }
    void display() {
        cout << numreal << "为总实部" << numempty << "为总虚部" << endl;

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

    system("pause");
    return 0;
}