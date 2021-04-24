#include <iostream>
using namespace std;
class Ex
{

public:
    explicit Ex(int x, char c = 'c');  //构造函数的声明 explicit关键字用来修饰类的构造函数，被修饰的构造函数的类，不能发生相应的隐式类型转换
    ~Ex(){
        cout <<da<<endl;
    } //析构函数，在实现析构的同时将私有域中da的值输出

    void outdata() const{
        cout <<ch<<" "<<da<<endl;
    } //类中的自定义函数，作用：来输出函数私有区域的成员

private:
    int	da;
    char ch;
};

Ex::Ex(int x, char c):da(x), ch(c)  //赋复制啊吧吧调用，类的组合哪里
{
    cout <<da<<endl;
}  //构造函数的定义

//Ex::~Ex(){
  //  cout <<ch<<endl;
//}

int main()
{
    Ex	x(3,'a'), y(1);   //声明对象x和y
    Ex  z[2] = {Ex(10,'a'), Ex(1,'d')};   //声明对象数组z[2]
    x.outdata();  //调用对象x的输出函数
    y.outdata();  //调用对象y的输出函数
    z[0].outdata(); //对象对象数组z[0]的输出函数
}

//调用顺序，声明对象x的时候调用构造函数输出