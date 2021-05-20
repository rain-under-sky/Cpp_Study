#include <iostream>
using namespace std;


class test{
private:
    static int count;
public:
    test(){
        count++;
    }
    /*test(test &p){
        count++;
    }*/
    void print(){
        cout<<count<<endl;
    }
};

int test::count = 0; //给类中数据成员进行初始化

int main(){
    test a();
    a.print();
    return 0;
}