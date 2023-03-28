#include<stdio.h>

int main()
{
  int a,b,c;
  printf("enter the number a:\n");
  scanf("%d",&a);
   printf("enter the number b:\n");
  scanf("%d",&b);
   printf("enter the number c:\n");
  scanf("%d",&c);
  if(a>b&&a>c)
  {
      printf("a is greater\n");
  }
  else if(b>a&&b>c)
  {
      printf("b is greater\n");
  }
  else if(c>a&&c>b)
  {
      printf("c is greater\n");

  }
  
  

return 0;
}