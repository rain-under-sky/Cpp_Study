#include <iostream>
using namespace std;

class A{
public:
    A();   //声明构造函数
    A(const A&);   //声明复制拷贝函数
    A(A&);         //声明构造函数的重载函数，参数参入类A的引用
    ~A();   //声明析构函数
};

//A(class)是一个数据类型，和int一样，所以可以传入类的引用以及下面自定义函数可以把返回值设置为类

A fun1(){
    A a;
    return a;  //这里就是把对象a的值原封不动的返回回去
}

A fun2(A a){
    A a2 = a;
    return a2;
}

A fun3(A& a){
    return a;
}

A& fun4(A& a){
    return a;
}

int main(){

    //第一次函数调用
    A a1 = fun1();
    cout << endl;

    //第二次函数调用
    A a2 = fun2(a1);
    cout << endl;

    //第三次函数调用
    A a2_2;
    a2_2 = fun2(a1);
    cout << endl;

    //第四次函数调用
    A a3 = fun3(a1);
    cout << endl;

    //第五次函数调用
    A& a4 = fun4(a1);
    cout << endl;

}