#include <stdio.h>

int main(void){
    int a[20] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39};
    int CheckNum;
    int low = 0;
    int high = 19;
    int mid = 9;
    int flag = 0;
    printf("请输入您要查找的数：");
    scanf("%d",&CheckNum);
    while(low < high){
        mid = (low + high)/2;
        //printf("low=%d,mid=%d,high=%d\n",low,mid,high);
        if(a[mid]>CheckNum)
        {
            high = high - 1;   //假如需要查找的数比现在最中间的数小，那么就把中间的数往前调1，再进行循环寻找
        }
        else if(a[mid]<CheckNum)
        {
            low = low + 1;
        }
        else if(a[mid]==CheckNum)
        {
            flag = 1;    //找到就把flag变成1然后跳出循环，一遍遍折半寻找法寻找后还没找到的话flag就还是0
            break;
        }
    }

    if(flag)
    {
        printf("该数是数组的第%d个元素的值\n",mid+1);
    }
    else
    {
        printf("Not found!\n");
    }

}