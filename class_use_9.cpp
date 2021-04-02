#include <iostream>
using namespace std;
class student{
private:
    int a;
public:
    student(){
        a = 12;
        cout<<a<<endl;
    }
};
int main(void){
    student stu1;
    student &stu2 = stu1;   //声明stu2去引用stu1


    stu2;

    return 0;

}