#include<stdio.h>
int main()
{
    int i,m,j,c=0;
    scanf("%d%d",&m,&j);
    for(i=m;i<=j;i++)
    {
        if(i%3==0)
        c++;
    }
          printf("%d",c);
}