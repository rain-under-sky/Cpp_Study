#include <iostream>
using namespace std;

class Cpeople{
public:
    int a;
    void fun(){
        cout<<a<<endl;
    }
};

class test{
public:
    int a;
    cout<<a<<endl;
};

int main(void){
    Cpeople no1;
    no1.a=12;
    no1.fun();

    return 0;
}