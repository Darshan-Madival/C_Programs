#include<stdio.h>
#include<string.h>

int main()
{
  char name1[20]="Darshan";
  char name2[20]="Darshan";
  if(strcmp(name1,name2)==0)
  {
      printf("strings are equal\nl");
  }
  else{
      printf("strings are unequal\n");
  }
return 0;
}