#include <stdio.h>

int main(void){
    int a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int CheckNum;
    int low = 0;
    int high = 19;
    int mid = 9;
    int flag = 0;
    printf("请输入您要查找的数：");
    scanf("%d",&CheckNum);
    while(low < high){
        printf("low=%d,mid=%d,high=%d\n",low,mid,high);
        if(a[mid]>CheckNum)
        {
            high = mid-1;   //假如需要查找的数比现在最中间的数小，那么就把中间的数往前调1，再进行循环寻找
        }
        else if(a[mid]<CheckNum)
        {
            low = mid+1;
        }
        else if(a[mid]==CheckNum)
        {
            flag=1;    //找到就把flag变成1然后跳出循环，一遍遍折半寻找法寻找后还没找到的话flag就还是0
            break;
        }
    }

    if(flag)
    {
        printf("该数是数组的第%d个元素的值\n",mid);
    }
    else
    {
        printf("Not found!\n");
    }

}