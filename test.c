#include <stdio.h>
int main()
{
    int i;
    int j;
    i = 0;
    while( i < 10 )
    {
        i++;
        j = 2*i;
        printf("2x%d is equal to %d\n", i, j);
    }
    //getchar();

    return 0;
}