#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
    sum=sum+arr[i];
}
printf("%d",sum);
}