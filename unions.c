#include<stdio.h>
union dpm
{
    int  price;
    float org;
    char title[30];
};
int main()
{
 union dpm s1;
 printf("enter the price\n ");
 scanf("%d",&s1.price);
 printf("enter the orgi\n ");
 scanf("%f",&s1.org);
 printf("enter the title\n ");
 scanf("%s",&s1.title);

 printf("lists are: %d\n %f\n %s\n", s1.price,s1.org,s1.title);



 
return 0;
}