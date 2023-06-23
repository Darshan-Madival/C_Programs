//frequency of vowels ,consonants,words,digits,words
#include<stdio.h>
int main()
{
    char str[30];
   printf("Enter the string:");
   scanf("%[^\n]s",&str);
   int c_count=0,v_count=0,w_count=0,d_count=0,s_count=0;
   for(int i=0;str[i];i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
        v_count++;
    }
    else if(str[i]>='0' &&str[i]<='9'){
        d_count++;
    }
    else if(str[i]==' '){
        s_count++;
    }
    else{
        c_count++;
    }
  
   }
   printf("Vowels=%d\n",v_count);
   printf("consonants=%d\n",c_count);
   printf("Digits=%d\n",d_count);
   printf("space=%d\n",s_count);
   printf("words=%d\n",s_count+1);
   return 0;
}