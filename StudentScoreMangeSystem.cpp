#include <iostream>
#include <string>
using namespace std;

struct student{    //学生基本信息的结构体
    string name;
    int ID;
    int classs;
    int MathScore;
    int EnglishScore;
    int ComputerScore;
    struct student *next;
};
/*void IntorOut(){   //控制台输出的函数
    printf("********************************");
    printf("欢迎来到学生成绩管理系统");
    printf("");
    printf(1);
    printf(1);
    printf(1);
    printf("********************************");

}*/




int main(void){
    int StudentCount; //学生人数
    int i = 1;  //链表控制变量
    /*平均成绩变量*/
    int MathAverage = 0;
    int EnglishAverage = 0;
    int ComputerAverage = 0;

    /*查询比较变量*/
    char CheckName[15];
    int  CheckID;

    /*求及格率循环变量*/
    int MathCount = 0;
    int EnglishCount = 0;
    int ComputerCount = 0;

    /*及格率表示*/
    float MathNum,EnglishNum;
    float ComputerNum;

    cout<<"请输入您的学生个数:";
    cin>>StudentCount;

    /*以下代码是成绩的输入*/
    struct student *head;
    struct student *tail,*start;
    head = tail = new (struct student);
    cout<<"请依次输入第"<<i<<"个学生的姓名，学号，班级，数学成绩，英语成绩，计算机成绩:";
    cin>>tail->name>>tail->ID>>tail->classs>>tail->MathScore>>tail->EnglishScore>>tail->ComputerScore;

    for(i = 2;i <= StudentCount;i++){
        start = new (struct student);
        cout<<"请依次输入第"<<i<<"个学生的姓名，学号，班级，数学成绩，英语成绩，计算机成绩:";
        cin>>tail->name>>tail->ID>>tail->classs>>tail->MathScore>>tail->EnglishScore>>tail->ComputerScore;
        tail->next = start;
        tail = start;
    }
    tail->next = NULL;
    start = head; //将start指针指到head指针上，等下用start指针进行循环遍历


    /*//以下代码是学生学号的查询
    cout<<"请输入您要查询的学号:";
    cin>>CheckID;
    cout<<endl;
    while(start != NULL){
        if(CheckID == start->ID){
            cout<<"该学生信息如下"<<endl;
            cout<<"姓名"<<start->name<<endl;
            cout<<"学号"<<start->ID<<endl;
            cout<<"班级"<<start->classs<<endl;
            cout<<"数学成绩"<<start->MathScore<<endl;
            cout<<"英语成绩"<<start->EnglishScore<<endl;
            cout<<"计算机成绩"<<start->ComputerScore<<endl;
        }

        start = start->next;
    }*/

    //start = head;
    //以下代码是学生姓名查询
    /*cout<<"请输入您要查询的姓名:";
    cin>>CheckName;
    cout<<endl;
    while(start != NULL){
        if(CheckName == start->name){
            cout<<"该学生信息如下"<<endl;
            cout<<"姓名"<<start->name<<endl;
            cout<<"学号"<<start->ID<<endl;
            cout<<"班级"<<start->classs<<endl;
            cout<<"数学成绩"<<start->MathScore<<endl;
            cout<<"英语成绩"<<start->EnglishScore<<endl;
            cout<<"计算机成绩"<<start->ComputerScore<<endl;
        }

        start = start->next;
    }*/
    //start = head;


    /*以下代码是对平均成绩的排序*//*
    while(start != NULL){
        MathAverage += start->MathScore;
        start = start->next;
    }

    while(start->next != NULL){
        EnglishAverage += start->EnglishScore;
        start = start->next;
    }

    while(start->next != NULL){
        ComputerAverage += start->ComputerScore;
        start = start->next;
    }*/

    /*以下代码是求及格率的*/
    while(start != NULL){
        if(start->MathScore >= 60){
            MathCount++;
        }
        else if(start->EnglishScore >= 60){
            EnglishCount++;
        }
        else if(start->ComputerScore >= 60){
            ComputerCount++;
        }
        start = start->next;
    }

    MathNum = MathCount/StudentCount;
    EnglishNum = EnglishCount/StudentCount;
    ComputerNum = ComputerCount/StudentCount;

    cout<<ComputerNum;

    return 0;
}








