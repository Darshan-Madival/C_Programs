#include<stdio.h>
void main(){
    int a;
    printf("Enter the Number:\n");
    scanf("%d",&a);
    if(a==0){
        printf("The number is equal to zero\n");
    }
     if(a>0){
        printf("The number Positive\n");
    }
     if(a<0){
        printf("The number Negative\n");
    }
   
}