#include<stdio.h>
int main()
{
    int n,k,d,sum=0;
    scanf("%d",&n);
    k=n*n;
    while(k>0)
    {
        d=k%10;
        sum=sum+d;
        k=k/10;
    }
    if(n==sum)
    printf("Neon Number");
    else 
    printf("Not Neon Number");
}