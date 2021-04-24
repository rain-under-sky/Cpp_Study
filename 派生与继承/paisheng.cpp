#include <iostream>
using namespace std;

class person{
private:
    string name;
    int old;
public:
    person(){

    }

    ~person(){
        cout<<"析构结束"<<endl;
    }

    void setperson(string pname,int pold){
        old = pold;
        name = pname;
    }
};