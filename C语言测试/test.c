#include <stdio.h>
#include <stdlib.h>
int**newMatrix(int m, int n)
{
    int i, j;
    int **a = (int**)malloc(sizeof(int*) * m);
    for( i = 0;i < m;i++)
    {
        a[i] = (int *)malloc(sizeof(int) * n);
    }
    for(i = 0;i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    return a;
}
int **saddlePoint(int**Mtrx,int m,int n)
{
    int i,j,min,x,h;
    for(i = 0;i < m;i++)
    {
        for(j = 1;min = Mtrx[i][0];j < n)
        {
            if(min > Mtrx[i][j])
            {
                min = Mtrx[i][j];
            }
        }
        for(j=0;j<m;j++)
        {
            if(min==Mtrx[i][j])
            {
                for(x=0,h=1;x<n;x++)
                {
                    if(min<Mtrx[i][x])
                    {
                        h=0;
                        break;
                    }
                }
            }
            if(h==1)
            {
                printf("%d", min);
            }

        }
    }
}
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    saddlePoint(newMatrix(m , n), m, n);

    return 0;
}