#include <iostream>
#include <string>
using namespace std;

class student{
private:
    string *name;
    int age;

public:
    student(string *pname, int page){
        name = new string;
        *name = *pname;
        age = page;
    }

    ~student(){
        delete name;
    }

    student(const student& stu){
        name = new string;
        name = stu.name;
        age = stu.age;
    }

    void print(){
        cout<<*name<<' '<<age;
    }

};
int main(){
    student stu1((string *) "aomsir", 19);
    student stu2(stu1);
    stu1.print();
    stu2.print();
    return 0;
}