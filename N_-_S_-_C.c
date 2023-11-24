#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    for(i=++a;i<b;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}