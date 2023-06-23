#include<stdio.h>
void main(){
    char c;
    int a,b;
    printf("Enter the arithmatic operation you want to perform:\n");
    scanf("%c",&c);
    printf("Enter the First Number:\n");
    scanf("%d",&a);
    printf("Enter the Second Number:\n");
    scanf("%d",&b);
    float result;
    switch(c){
        case'+':result=a+b;
                printf("The Addition of Two numbers is %f",result);
                break;
         case'*':result=a*b;
                printf("The Multiplication of Two numbers is %f",result);
                break;
         case'-':result=a-b;
                printf("The Substraction of Two numbers is %f",result);
                break;
        case'/':result=a/b;
                printf("The Division of Two numbers is %f",result);
                break;  
        case'%':result=a%b;
                printf("The Modulus of Two numbers is %f",result);
                break;  
        default:printf("Enter the vaid input");                                      
    }
}