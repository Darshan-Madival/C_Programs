#include<stdio.h>


int main()
{
   int count=0,i=0;
   char name[50];
   printf("Enter the name:\n");
   gets(name);
   while(name[i]!='\0')
    {

     count++;
     i++;

    }
    puts(name);
   printf("length of string is = %d",count);
  return 0;
}