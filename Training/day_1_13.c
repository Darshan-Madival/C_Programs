#include<stdio.h>
void main(){
float a,b;
char c;
float result;
 printf("Enter the symbol which you want to perform('+','-','*','/'):\n");
 scanf("%c",&c);
 printf("Enter numbers a  \n");
scanf("%f",&a);
printf("Enter numbers b \n");
scanf("%f",&b);
switch(c)
{
case '+':result=a+b;
         printf("%f\n",result);
         break;
case '-':result=a-b;
         printf("%f\n",result);
         break; 
case '*':result=a*b;
         printf("%f\n",result);
         break;  
case '/':result=a/b;
         printf("%f\n",result);
         break; 
default:printf("enter valid input symbol\n");                                                
}


}
