#include<stdio.h>
void main(){
  int num;
  float temp, s;
  printf("Enter the number:\n");
  scanf("%d",&num);
  s=num/2;
  temp=0;
  while(s!=temp){
    temp=s;
    s=(num/temp+temp)/2;
  }
  printf("The squareroot of %d is %f\n ",num,s);
  }
