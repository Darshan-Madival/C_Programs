#include<stdio.h>
#include<conio.h>
void main(){
    int num,r,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int a=num;
    while(num>0){
        r=num%10;
        sum=(10*sum)+r;
        num=num/10;
    }
    if(sum==a){
        printf("the number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
}