#include <stdio.h>
#include <string.h>

int main(void){
    char num[3];  //数字字符
    int change_num[3];  //ASCII转换后的值
    int sum = 0;     //和，已初始化
    int i;   //循环控制变量
    printf("请输入您的数字字符:");
    scanf("%s",num);
    for(i=0;i<3;i++){
        change_num[i] = num[i] - 48;   //此步骤将每个元素的值转换为十进制的值，比如字符1的十进制是49
    }

    for(i=0;i<3;i++){
        sum += change_num[i];
    }
    printf("您输入的三个字符的和为:");
    printf("%d",sum);
}