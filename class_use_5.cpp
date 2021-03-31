#include <iostream>
using namespace std;

class student{
public:
    int a;
    student(){   //构造函数
        a = 13;
    }
};

int main(void){
    student stu1;
    cout<<stu1.a<<endl;

    student *stu2 = new student;
    cout<<stu2->a<<endl;


    return 0;

}