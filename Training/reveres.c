#include<stdio.h>
void main(){
    int num,sum=0,rem=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int c;
    c=num;
    while(num>0){
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    printf("The reversed number is %d\n",sum);
    if(c==sum){
        printf("The number is palindrome\n");
    
    }
    else{
        printf("The number is not palindrome\n");
    }
}