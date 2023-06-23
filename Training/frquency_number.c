#include<stdio.h>
int main()
{
   int num,digit,count=0;
   printf("Enter the number:");
   scanf("%d",&num);
  printf("enter the digit you want to count:");
  scanf("%d",&digit);
  while(num!=0){
    int rem=num%10;
    if(rem==digit){
        count++;
    }
    num=num/10;
  }
  printf("%d is repeated %d number of times",digit,count);
   return 0;
}