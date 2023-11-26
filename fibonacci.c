#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,m;
    scanf("%d",&m);
    printf("%d %d ",a,b);
    for(i=1;i<=m-2;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}