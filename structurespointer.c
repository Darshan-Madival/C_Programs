#include<stdio.h>

struct student{
    int rollno;
    char name[30];
    float marks;
};

int main()
{
    int i;
    struct student st[5],*ptr;
    ptr=&st[5];
    printf("Enter the information of student\n");
    for(i=0;i<5;i++)
    {
        printf("enter the RollNo:\n");
        scanf("%d",&ptr->rollno);
        printf("enter the Name:\n");
        scanf("%s",&ptr->name);
        printf("enter the Marks:\n");
        scanf("%f",&ptr->marks);
    }
    printf("student information list\n");
    for(i=0;i<5;i++)
    {
      printf("RollNo:%d,Name=%s,Marks=%f \n",st[i].rollno,st[i].name,st[i].marks);
    }
return 0;
}