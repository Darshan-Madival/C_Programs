#include<stdio.h>
#include<conio.h>
void fun();
int main()
{
    fun();
    fun();
    fun();

return 0;
}
void fun()
{
    int a=1;
    static int b=1;
    printf("a=%d,b=%d",a,b);
    a++;
    b++;
}

