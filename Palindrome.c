#include<stdio.h>
int main()
{
    int n,t,d,r=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(t==r)
        printf("Palindrome");
    else
    printf("Not Palindrome");
    
}