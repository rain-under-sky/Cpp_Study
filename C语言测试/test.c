#include <stdio.h>
//#include <string.h>
int main()
{
    char a[99999];
    char *p = &a[0];
    int t = 0;
    int b[1]={1};
    int sum = 0;
    char *w[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    fgets(a);
    while (*p != 0)
    {
        sum += (int)*p - '0';
        p++;
    }
    while (sum > 0)
    {
        b[t] = sum % 10;
        printf("b[%d]=%d\n",t,b[t]);
        sum /= 10;
        t++;
    }
    while (t >= 2)
    {
        printf("%s ", w[b[t - 1]]);
        t--;
    }
    printf("%s", w[b[0]]);
    return 0;
}