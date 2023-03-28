#include<stdio.h>
void add();
int main()
{
  add();
  printf("%d",a+b);//it cannot be used in main function bcz its scope is within blocks
return 0;
}
void add()
{
    int a=12,b=30;
    printf("%d",a+b);
}