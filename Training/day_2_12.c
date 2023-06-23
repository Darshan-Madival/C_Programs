#include<stdio.h>
void main(){
    int a;
    printf("Enter the Number:\n");
    scanf("%d",&a);
    switch(a%2==0){
        case 1:printf("The number is Even\n");
                break;
        case 0:printf("The number is odd\n"); 
                break; 
        default:printf("Enter valid input\n"); 
                break;             
    }
    switch(a>0){
        case 1:printf("The number is positive\n");
               break;
        case 0:printf("The number is negative\n");
               break;
        default:printf("Enter valid input\n"); 
               break;             
    }
}