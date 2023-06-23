#include<stdio.h>
int main(){
   int a=10,b=9;
   int *p,*q;
   q=&b;
  p=&a;
  q=p;
  printf("%d\n",p);
  printf("%d",q);
   

}