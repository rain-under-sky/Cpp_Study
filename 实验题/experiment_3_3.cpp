#include <iostream>
using namespace std;
class Object{
private:
    int weight;
public:
    Object(int pweight){
        weight = pweight;
        cout<<"Object Constructed"<<endl;
    }
    ~Object(){
        cout<<"Object Destructed"<<endl;
    }
};

class Box: public Object{
private:
    int width,height;
public:
    Box(int pwidth,int pheight,int pweight):Object(pweight){
        width = pwidth;
        height = pheight;
        cout<<"Box Constructed"<<endl;
    }
    ~Box(){
        cout<<"Box Destructed"<<endl;
    }
};
int main(){

}