#include<iostream>
using namespace std;
class A {
public:
    A(int i):k(i){}
    virtual void operator!() {
        cout << "A : k=" << k << endl;
    }
protected:
    int k;
};
class B :public A {
public:B(int n = 0) :A(0), j(n) { k++; };
    virtual void operator!() {
        cout << "B: k=" << k << ",j=" << j << endl;
    }
protected:
    int j;
};
class C :public B {
public:C(int n = 0) :B(0), m(n) { k++; j++; }
    virtual void operator!(){
        cout << "C: k=" << k << ",j=" << j << ",M=" << m << endl;
    }
private:
    int m;
};
int main() {
    B b(5);
    C c(3);
    A a(2);
    A* ab = &a;
    !*ab;
    !b;
    !c;
    A &ca = (B)c;
    !ca;
    B &cb = c;
    !cb;
    system("pause");
    return 0;
}