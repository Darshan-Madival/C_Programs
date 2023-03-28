#include<stdio.h>

int main()
{
  register int a=10;//fast accesing bcz it is stored in register not in ram
   printf("%d",a);
return 0;
}
/*register can hold 16 bit of memory is nothing but 2 bytes
it can store int ,char,but not float bcz float has 4 bytes.it is
usually used when variable is frequently used.*/ 
