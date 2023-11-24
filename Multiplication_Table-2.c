#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d%d%d",&n,&k);
    for(i=1;i<=k;i++)
    {
        printf("%d x %d = %d
",n,i,i*n);
    }
}