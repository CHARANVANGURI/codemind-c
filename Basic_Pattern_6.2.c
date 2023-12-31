#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(k=i-1;k>=1;k--)
        {
            printf(" ");
        }
        for(j=1;j<=n-i+1;j++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}