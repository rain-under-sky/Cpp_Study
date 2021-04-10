#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    long num;
    string name;
    string major;
    int math;
    int c;
    int cc;
};

int main()
{
    int i,j;
    long A;

    struct student a[5];
    cout << "请输入学生信息。";
    a[5] = { {00000,"wangcan","jsj",100,100,100},
        {11111,"wangyun","jsj",100,100,100},
        {22222,"zhangshan","jsj",100,100,100},
        {33333,"lishi","jsj",100,100,100},
        {44444,"gongyunhang","jsj",100,100,100} };
    cout<<"请输入要删除的同学学号"<<endl;
    cin >> A;
    for (i = 0; i < 5; i++)
        if (A == a[i].num)
        {
            for (j = 4 - i; j != 0; j--)
            {
                a[i] = a[i + 1];
                i++; break;
            }
        }
    for (i = 0; i < 4; i++)
        cout << a[i].num << a[i].name << a[i].major << a[i].math << a[i].c << a[i].cc << endl;
    return 0;

}