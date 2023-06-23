#include<stdio.h>
int main()
{
   char a[100];
   int i;
   int len=0;
   int count_1=0;
   int count_2=0;
   scanf("%[^\n]s",a);
   for(i=0;a[i];i++){
    len++;
   }
   printf("%d\n",len);
   
   for(i=0;i<len;i++){
    if(a[i]=='-'){
        count_1++;
    }
    if(a[i]=='H'){
        count_2++;
    }
   }
//    printf("%d\n%d",count_1,count_2);

   return 0;
}