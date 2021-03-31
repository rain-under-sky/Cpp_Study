#include <stdio.h>
#define MAXLEN 100
typedef struct
{
    int weight;
    int lchild, rchild,parent;
}HTNode;
typedef HTNode HT[MAXLEN];
int n;
void InitHFMT(HT T)
{
    int i;
    printf ("\n 请输入共有多少个权值（小于100）：");
    scanf ("%d",&n);
    for (i=0; i<2*n-1;i++)
    {
        T[i].weight=0;
        T[i].lchild=-1;
        T[i].rchild=-1;
        T[i].parent=-1;
    }
}
void InputWeight(HT T)
{
    int w,i;
    for (i=0; i<n;i++)
    {
        printf ("输入第%d个权值:",i+1);
        scanf ("%d",&w);getchar();
        T[i].weight=w;
    }
}
void SelectMin (HT T, int i, int *p1,int *p2)
{
    long min1=888888,min2=888888;
    int j;
    for (j=0;j<=i;j++)
    { if(T[j].parent==-1)
        {
            if (min1>T[j].weight)
            {
                min1=T[j].weight;
                *p1=j;
            }
        }

    }
    for (j=0;j<=i;j++)
    {
        if (T[j].parent==-1)
        {
            if (min2>T[j].weight&&j!=(*p1))
            {
                min2=T[j].weight;
                *p2=j;
            }
        }
    }
}
void CreatHFMT (HT T)
{
    int i,p1,p2;
    InitHFMT (T);
    InputWeight(T);
    for(i=n;i<2*n-1;i++)
    {
        SelectMin(T,i-1,&p1,&p2);
        T[p1].parent=T[p2].parent=i;
        T[i].lchild=T[p1].weight;
        T[i].rchild=T[p2].weight;
        T[i].weight=T[p1].weight+T[p2].weight;
    }
}
void PrintHFMT (HT T)
{
    int i;
    printf("\n哈夫曼树的各边显示:\n");
    for (i=0; i<2*n-1; i++)
        while(T[i].lchild!=-1)
        {
            printf("(%d,%d),(%d,%d)\n",T[i].weight,T[i].lchild,
                   T[i].weight,T[i].rchild);
            break;
        }
}
void hfnode(HT T,int i,int j)
{
    j=T[i].parent;
    if (T[j].rchild==T[i].weight)
        printf("1");
    else
        printf("0");
    if(T[j].parent!= -1)
        i=j,hfnode (T,i,j);
}
void huffmannode(HT T)
{
    int i,j,a;
    printf("\n输入的权值的对应哈夫曼编码：");
    for (i=0;i<n;i++)
    {
        j=0;
        a=1;
        printf("\n%i的编码为：",T[i].weight);
        hfnode(T,i,j);
        i=a;
    }
}
void main()
{
    HT HT;
    CreatHFMT(HT);
    PrintHFMT(HT);
    huffmannode(HT);
    printf("\n ");

}