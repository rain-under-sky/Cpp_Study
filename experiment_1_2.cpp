#include <iostream>
#include <string>
using namespace std;

//声明Book结构体
struct Book{
    string ISDN;
    string name;
    string author;
    int prime;
};

int main(){
    struct Book a[5]={
            {"",},
            {},
            {},
            {},
            {},
    };
}