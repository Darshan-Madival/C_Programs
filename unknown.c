#include<stdio.h>

int main()
struct student
{
    int rollno;
    char name[50];
    float marks;
};
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("The file not found\n");
    }
    struct student st;
    printf("enter the students information\n");

    printf("enter the roll no;\n");
    puts(fp,st.rollno);
    return 0;
}