#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],odd=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        odd=odd+arr[i];
    }
    printf("%d",odd);
}