#include<stdio.h>
#pragma pack(1)//structure packing

struct student
{
  double j;
  char c;
  int v;
  double y;

};
int main()
{
  struct student s1;
  printf("%d",sizeof(s1));
  
}
