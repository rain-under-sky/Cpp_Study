#include "stdio.h"
#include <string.h>

// pbin：待转换的二进制字符串。
// 返回值：二进制字符串转换为十进制整数的结果。
long bintodec(const char *pbin)  //参数传递为常指针，以免字符指针修改了外部的值
{
    int ii=0;
    long result = 0;  //返回给函数外部的值

    while (pbin[ii]!=0)
    {
        result=result*2+(pbin[ii]-'0');
        ii++;
    }

    return result;
}

int main()
{
    char str[65];

    memset(str,0,sizeof(str));
    printf("请输入一个二进制的字符串（只能由0和1组成）：");
    scanf("%s",str);

    printf("%s转换为十进制的结果是：%d\n",str,bintodec(str));
}

