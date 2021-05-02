#include <iostream>
using namespace std;

class Base1{
public:
    Base1(int i)
    {   //基类Base1的构造函数
        b1 = i;
        cout<<"construct Base1"<<endl;
    }
    void display()
    {   //基类Base1的输出函数
        cout<<"b1="<<b1<<endl;
    }
    ~Base1()
    {   //基类Base1的析构函数
        cout<<"destruct Base1"<<endl;
    }
private:
    int b1;
};

class Base2{
public:
    Base2(int i)
    {   //基类Base2的构造函数
        b2 = i;
        cout<<"construct Base2"<<endl;
    }
    void display()
    {   //基类Base2的输出函数
        cout<<"b2="<<b2<<endl;
    }
    ~Base2()
    {   //基类Base2的析构函数
        cout<<"destruct Base2"<<endl;
    }
private:
    int b2;
};

class Derive:public Base2,public Base1{
public:
    Derive(int m):Base1(m+2),Base2(m-2)
    {
        d = m;
        cout<<"construct Derive"<<endl;
    }

    void display()
    {
        Base1::display();
        Base2::display();
        cout<<"d="<<d<<endl;
    }

    ~Derive()
    {
        cout<<"destruct Derive"<<endl;
    }

private:
    int d;
};


int main(){

    return 0;
}