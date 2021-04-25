#include <iostream>
#include <string>
using namespace std;

class person{
private:
    string name;
    int old;
public:
    void SetPerson(string pname,int pold){
        old = pold;
        name = pname;
    }  //类似构造函数


};
int main(){
    return 0;
}