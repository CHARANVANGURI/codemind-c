#include<stdio.h>
int main()
{
    int n,m,s=0;
    scanf("%d",&n);
    m=n%10;
    while(n>10)
    {
        n=n/10;
    }
    s=n+m;
    printf("%d",s);
} 