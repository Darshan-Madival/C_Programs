//program to check string is panagram or not
#include<stdio.h>
#include<stdlib.h>
int main()
{
   char *p=(char *)malloc(100*sizeof(char));
   int count[26]={0};
   int i,the flag=0;

   printf("Enter the String:\n");
   scanf("%[^\n]s",p);

   for(int i=0;p[i];i++){
      if(p[i]>=65 && p[i]<=90){
         count[p[i]-'A']++;
      }
      else if(p[i]>=97 && p[i]<=122){
         count[p[i]-'a']++;
      }
   }
   for(i=0;i<26;i++)
   {
      if(count[i]==0)
      {
         flag=1;
         break;
      }
   }
   printf("%d\n",flag);
   if(flag==0){
      printf("Panagram");
   }
   else{
      printf("Not panagram");
   }

   return 0;
}