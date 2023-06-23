#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the Number a:\n");
    scanf("%d",&a);
    printf("Enter the Number b:\n");
    scanf("%d",&b);
    printf("Enter the Number c:\n");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a is greater\n");
        }
        else{
            printf("c is greater\n");
        }
    }
    else{
        if(b>c){
            printf("b is greater\n");
        }
        else{
            printf("c is greater\n");
        }
    }
}