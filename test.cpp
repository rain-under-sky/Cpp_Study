#include <iostream>
using namespace std;
class Ex
{
public:
    explicit Ex(int x, char c = 'c');  //构造函数的声明
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

Ex::Ex(int x, char c):da(x), ch(c)
{
    cout <<da<<endl;
}  //构造函数的定义

//Ex::~Ex(){
//  cout <<ch<<endl;
//}

int main()
{
    Ex	x(3,'a'), y(1);
    Ex  z[2] = {Ex(10,'a'), Ex(1,'d')};
    x.outdata();
    y.outdata();
    z[0].outdata();
}