#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<3;i++){
        scanf("%f",a[i]);
        printf("%f ",a[i]);
    }
}