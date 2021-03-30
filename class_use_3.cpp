//友元的理解

#include <iostream>
#include <string>
using namespace std;
void test();

class teacher{
private:
    string name;
    int old;
    void fun1(){
        name = "aomsir";
        old = 19;
        cout<<name<<' '<<old<<endl;
    }

    friend class student;   //给student类加友元
    friend void test();
};

class student{
public:
    teacher tea1;
    void fun2(){
        tea1.fun1();
    }
};

void test(){
    teacher tea1;
    tea1.fun1();
}

int main(void){
    student stu1;
    stu1.fun2();

    test();
}