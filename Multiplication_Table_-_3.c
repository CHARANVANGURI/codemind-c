#include<stdio.h>
int main()
{
    int n,k,m,i;
    scanf("%d%d%d",&n,&k,&m);
    for(i=k;i<=m;i++)
    {
        printf("%d x %d = %d
",n,i,i*n);
    }
}