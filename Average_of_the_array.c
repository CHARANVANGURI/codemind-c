#include<stdio.h>
int main(){
    int n,sum = 0;
    float ave;
    scanf("%d",&n);
    int arr[n];
    	for(int i = 0 ; i < n ; i++){
    		 scanf("%d",&arr[i]);
    		 sum=sum+arr[i];
		}
		ave=(sum*1.00)/n;
		printf("%.2f",ave);
	}

