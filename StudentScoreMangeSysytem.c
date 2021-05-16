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
    int ScienceScore;
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
    printf("请输入您的学生个数:");
    scanf("%d",&StudentCount);

    struct student *head;
    struct student *tail,*start;
    head = tail = (struct student*)malloc(sizeof(struct student));
    printf("请依次输入第%d个学生的姓名，学号，ID，数学成绩，英语成绩，计算机成绩",&i);
    scanf("%c%d%d%d%d",tail->name[15],tail->ID,tail->MathScore,tail->EnglishScore,tail->ScienceScore);

    for(i = 2;i < StudentCount;i++){
        start = (struct student*)malloc(sizeof(struct student));
        printf("请依次输入第i个学生的姓名，学号，ID，数学成绩，英语成绩，计算机成绩",&i);
        scanf("%s%d%d%d%d",tail->name[15],tail->ID,tail->MathScore,tail->EnglishScore,tail->ScienceScore);
        tail->next = start;
        tail = start;
    }
    tail->next = NULL;
    start = head; //将start指针指到head指针上，等下用start指针进行循环遍历



}








