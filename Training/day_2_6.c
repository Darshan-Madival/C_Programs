#include<stdio.h>
void main(){
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    while(a%3==0){
        printf("the number is divisible by 3");
        break;
    }
    if(a%3!=0){
        printf("not divisible by 3\n");
    }
}