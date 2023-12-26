#include<stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
         if(i%2==0){
    s=s+arr[i];
}                  //if condition should bi in the loop.
    }           //i-->index & arr[i] --> no. in that index.
   
printf("%d",s);
}