#include<stdio.h>
int main()
{
   int a[5]={1,2,3,4,5};
   int pos,ele;
   printf("Enter the  element:");
   scanf("%d",&ele);
   printf("Enter the pos element you want to insert:");
   scanf("%d",&pos);
      for(int i=5-1;i>=pos;i--){
         a[i+1]=a[i];
      }
      a[pos]=ele;
      for(int i=0;i<6;i++){
         printf("%d\t",a[i]);
      }
   }

