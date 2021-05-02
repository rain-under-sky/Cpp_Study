#include <iostream>
using namespace std;

class Base1{
public:
    Base1(int i){  //基类Base1的构造函数
        b1 = i;
        cout<<"construct Base1"<<endl;
    }
    void display(){ //基类Base1的输出函数
        cout<<"b1="<<b1<<endl;
    }
    ~Base1(){   //基类Base1的析构函数
        cout<<"destruct Base1"<<endl;
    }
private:
    int b1;
};
int main(){

    return 0;
}