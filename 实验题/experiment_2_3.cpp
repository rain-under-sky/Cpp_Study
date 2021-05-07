#include <iostream>
#include <math.h>
using namespace std;

class square{
private:
    float side_length;  //边长
    float circle;
    float area;
public:
    square(float pside_length){
        side_length = pside_length;
    }  //构造函数

    ~square(){

    }  //析构函数

    float circle_count(){
        float circle;
        circle = 4 * side_length;
        return circle;
    }  //计算正方形边长

    float area_count(){
        float area;
        area = pow(side_length,2);
        return area;
    }  //计算正方形面积
    float cost(){

    }
};

//class lawn{
 //   square inner;
  //  square outer;
//public:
  //  double price(){

  //  }
//};

int main(){
    float pside_length;   //内部正方形的边长
    float cost;  //所有费用
    //float pside_length_out;
    cout<<"请输入一个非0的正数：";
    cin>>pside_length;

    if(pside_length <= 0){
        cout<<"参数错误，请重新输入"<<endl;
    }

    square in_square(pside_length);   //声明对象in_square，代表内部正方形
    square out_square(pside_length + 6);  //声明对象out_square,代表外部正方形

    cost = 150 * in_square.area_count() + (out_square.area_count() - in_square.area_count()) * 70 + out_square.circle_count() * 100;
    cout<<"总花费："<<cost<<endl;





}