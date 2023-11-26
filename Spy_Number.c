#include<stdio.h>
int main()
{
    int n,sum=0,pro=1,c;
    scanf("%d",&n);
    while(n>0)
    {
        c=n%10;
        sum=sum+c;
        pro=pro*c;
        n=n/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}