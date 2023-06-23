#include<stdio.h>
void main(){
   float fah,result;
   printf("enter the fahrenheit:\n");
   scanf("%f",&fah);
   result=(fah-32)*0.5556;
   printf("The fahrenheit to degree is %f ",result);

}