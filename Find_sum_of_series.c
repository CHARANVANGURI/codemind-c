#include<stdio.h>
int main()
{
    float i,n,sum=0;
    float k;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        k=1/i;
        sum=sum+k;
    }
       printf("%.2f",sum);
    
}