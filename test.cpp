#include <iostream>
using namespace std;

class A{
public:
    A(int i){
        cout<<i;
    }
};

class B:virtual public A{
    B():A(1){};
};

class C: public B{
public:
    C():A(2){};
};

int main(){
    C c;
    return 0;
}