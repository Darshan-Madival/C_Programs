#include<stdio.h>
#define N 100

int main()
{
    FILE *fp=NULL;
    fp=fopen("darshan.txt","a");
    char str[N];
    if(fp==NULL)
    {
        printf("The file not found\n");
    }

    printf("enter the word you want to append:\n");
    gets(str);

    fprintf(fp,"\n%s",str);

    fclose(fp);
    return 0;
}