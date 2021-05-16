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
};
void InforOut(){   //控制台输出的函数
    printf("********************************");
    printf("欢迎来到学生成绩管理系统");
    printf("");
    printf(1);
    printf(1);
    printf(1);
    printf("********************************");

}




int main(void){
    int StudentCount;
    printf("请输入您的学生个数:");
    scanf("%d",&StudentCount);
    struct student *head;
    struct student *tail,*start;
    head = tail = (int*)malloc(sizeof(head));
    

}








