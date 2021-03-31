#include <iostream>
using namespace std;

class student{
public:
    int a;
    string b;

    student(int a1,string b1){
        cin>>a1;
        cin>>b1;
        a = a1;
        b = b1;
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

int main(void){
    student stu1();



    return 0;
}