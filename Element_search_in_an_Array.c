#include<stdio.h>
int main(){
    int n,num, count = 0;
    scanf("%d",&n);
    int arr[n];
    	for(int i = 0 ; i < n ; i++){
    		 scanf("%d",&arr[i]);
		}
		scanf("%i" , &num);
    for(int i=0;i<n;i++){
       
        {
        	if(num==arr[i]){
        	count++;
              printf("True");
               break;
			}
		}
     }
     if(count == 0)
     printf("False");
}