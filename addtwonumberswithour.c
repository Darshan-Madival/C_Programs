#include<stdio.h>

int main()
{
  int a,b,c;
  printf("enter two numbers a and b:\n ");
  scanf("%d%d",&a,&b);
  
 // c=a-(-b);
 while(b>0)//only for positive integer:
 {
   a++;
   b--;
 }

  printf("addition of two matrix is %d ",a);


return 0;
}