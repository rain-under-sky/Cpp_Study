#include <stdio.h>
int main(){
    int a = 12;
    int *p = &a;
    *p = 145;
    printf("%p\n%p\n%p\n" , p, &*p, &a);
    printf("%d\n%d\n" , *p, a);
}