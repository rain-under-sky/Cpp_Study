#include <stdio.h>
#include <string.h>

int main(void){
    char num[4];
    int sum;
    int i;
    scanf("%s",num);
    for(i=0;i<3;i++){
        sum+=num[i];
    }

    printf("%d",sum);
}