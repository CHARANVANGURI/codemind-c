#include<stdio.h>
int main()
{
    float x,y;
    float loss;
    scanf("%f%f",&x,&y);
    loss=((y-x)/x)*100;
    printf("%.2f",loss);
}