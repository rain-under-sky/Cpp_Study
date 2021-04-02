//析构函数

#include <iostream>
using namespace std;

class student{
private:
    int a;
public:
    ~student(){
        cout<<"已释放"<<endl;   //定义析构函数，完成对象的清理，同时完成特定的任务（输出）
    }

    student(){
        a = 12;
        cout<<"已开始"<<endl;
    }

    void printf(){
        cout<<a<<endl;   //打印函数
    }
};

int main(){
    student stu1;

    stu1.printf();
    //stu1;
    return 0;
}