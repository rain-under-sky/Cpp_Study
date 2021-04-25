#include <iostream>
#include <string>
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

    void SetPerson(string pname,int pold){
        old = pold;
        name = pname;
    }
};

class student:public person{
private:
    int ID;
public:
    void SetStudent(string pname,int pold,int pID){
        person::SetPerson(string pname,int pold);
        ID = pID;
    }
};

int main(){

}