#include<stdio.h>
int main()
{
   typedef int Array[5];
   Array x={10,20,30,40,50};
   Array y={60,70,80,90,100};
   int i;
   for(i=0;i<5;i++){
    printf("%d\t",y[i]);
   }

   return 0;
}