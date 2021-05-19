#include <iostream>
using namespace std;
int i = 0;  //i为全局变量具有静态生存期

int main(){
    static int a = 2;
    int b = -10;
    int c = 0;
    cout<<"----MAIN----"<<endl;
    cout<<"i:"<<i<<" a="<<a<<" b="<<b<<" c="<<c<<endl;

    return 0;
}

void other(){
    static int a = 2;
    static int b;
    int c = 10;
    a+=10;
    i+=32;
    c+=5;
    cout<<"----OTHER----"<<endl;
    cout<<"i:"<<i<<" a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
    b = a;
}