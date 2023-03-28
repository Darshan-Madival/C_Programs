#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main()
{
    int h,m,s;
    int d=1;
    printf("enter the hours minute and second\n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12||m>59||s>59)
    {
        printf("error!");
        exit(0);
    }
    while (1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("clock:\n");
        printf("%02d:%02d:%02d\n",h,m,s);
        sleep(d);
        system("cls");

    }
    return 0;
    
}