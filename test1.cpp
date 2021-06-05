#include <iostream>   //这是输入和输出的头文件，知道要写就行
using namespace std;   //这是命名空间作用域，知道要写在这里就行
class A{
private:
    int a;  //这是数据成员
    float b;
public:
    void fun(){ //这是函数成员
        cout<<"我爱C++";
    }
};

int main(void){
    A test;   //换个方式理解，这里和 int test;一个道理
    test.a;  //这个调用方式是不对的，因为这是对象调用私有区域的东西
    test.fun();  //这个是可以的，因为他在公有区域
}