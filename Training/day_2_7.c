#include<stdio.h>
void main(){
    int i=0;
    float n;
    float x;
    printf("%f",x);
    printf("Enter the number:\n");
    scanf("%f",&n);
    float sum=0;
    float avg;
    do{
       sum=sum+i;
       i++;
    }
    while(i<=n);
    printf("%f\n",sum);
    x=n;
    avg=sum/x;
    printf("%f\n",avg);
}