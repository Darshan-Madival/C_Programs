#include<stdio.h>
#include<math.h>

int main()
{
 float a,b,c,r1,r2,d;
 printf("enter the numbers a,b,c\n");
 scanf("%f%f%f",&a,&b,&c);
 d=b*b-4*a*c;
 if(d==0)
 {
     printf("The roots are real and equal\n");
     r1=-b/(2*a);
     r2=-b/(2*a);
     printf("root 1=%f,root 2=%f",r1,r2);
 }
 else if(d>0)
 {
     printf("the roots are real and distint\n");
     r1=(-b+sqrt(d))/(2*a);
     r2=(-b-sqrt(d))/(2*a);
     printf("root 1=%f,root 2=%f",r1,r2);
 }
 else{
     printf("the roots are real and imaginary");
 }
return 0;
}
