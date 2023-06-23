#include<stdio.h>
void main(){
    char c;
    printf("Enter the Charecter:\n");
    scanf("%c",&c);
    int a=c;
    if(a>=65 && a<=91){
        printf("Uppercase Letter\n");

    }
    else{
        printf("Lowercase Letter\n");
    }
}