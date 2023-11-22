#include<stdio.h>
int main()
{
    int i=1,n,tot=0;
    scanf("%d",&n);
    while(i<=n)
    {
      tot=tot+1;
      n=n/10;
    }
    printf("%d",tot);
}