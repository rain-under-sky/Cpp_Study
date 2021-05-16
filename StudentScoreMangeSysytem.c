#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sys/malloc.h>
struct student{    //学生基本信息的结构体
    char name[15];
    int ID;
    int class;
    int MathScore;
    int EnglishScore;
    int ComputerScore;
    struct student *next;
};
/*void InforOut(){   //控制台输出的函数
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
    int MathAverage = 0;
    int EnglishAverage = 0;
    int ComputerAverage = 0;
    char CheckName[15];
    int CheckID;
    printf("请输入您的学生个数:");
    scanf("%d",&StudentCount);

    /*以下代码是成绩的输入*/
    struct student *head;
    struct student *tail,*start;
    head = tail = (struct student*)malloc(sizeof(struct student));
    printf("请依次输入第%d个学生的姓名，学号，ID，数学成绩，英语成绩，计算机成绩:",i);
    scanf("%s%d%d%d%d",&tail->name[15],&tail->ID,&tail->class,&tail->MathScore,&tail->EnglishScore,&tail->ComputerScore);

    for(i = 2;i < StudentCount;i++){
        start = (struct student*)malloc(sizeof(struct student));
        printf("请依次输入第%d个学生的姓名，学号，ID，数学成绩，英语成绩，计算机成绩:",i);
        scanf("%s%d%d%d%d",&tail->name[15],&tail->ID,&tail->class,&tail->MathScore,&tail->EnglishScore,&tail->ComputerScore);
        tail->next = start;
        tail = start;
    }
    tail->next = NULL;
    start = head; //将start指针指到head指针上，等下用start指针进行循环遍历


    /*以下代码是学生学号的查询*/
    scanf("%d",CheckID);
    while(start != NULL){
        if(CheckID == start->ID){
            printf("*************************************");
            printf("该学生信息如下");
            printf("姓名:%s\n",start->name[15]);
            printf("学号:%d\n",start->ID);
            printf("班级:%d\n",start->class);
            printf("数学成绩\n:%d",start->MathScore);
            printf("英语成绩:%d\n",start->EnglishScore);
            printf("英语成绩:%d\n",start->ComputerScore);
            printf("*************************************");
        }
        start = start->next;
    }

    /*以下代码是学生姓名查询*/
    printf("请输入您的学生姓名进行查询");
    scanf("%s",CheckName[15]);
    while(start->next != NULL){
        if(CheckID == start->name[15]){
            printf("*************************************");
            printf("该学生信息如下");
            printf("姓名:%s\n",start->name[15]);
            printf("学号:%d\n",start->ID);
            printf("班级:%d\n",start->class);
            printf("数学成绩\n:%d",start->MathScore);
            printf("英语成绩:%d\n",start->EnglishScore);
            printf("英语成绩:%d\n",start->ComputerScore);
            printf("*************************************");
        }
        start = start->next;
    }

    /*以下代码是对平均成绩的排序*/
    while(start->next != NULL){
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
    }

    /*以下代码是求及格率的*/
    while(start->next != NULL){
        
    }
}








