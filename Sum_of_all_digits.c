#include<stdio.h>
int main()
{
    int i=1,n,d,sum=0;
    scanf("%d",&n);
    while(i<=n)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("%d",sum);
}