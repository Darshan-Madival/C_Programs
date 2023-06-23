#include<stdio.h>
void main(){
int  a, b,c;
printf("Enter the value a\n");
scanf("%d",&a);
printf("Enter the value b\n");
scanf("%d",&b);
printf("Enter the value c\n");
scanf("%d",&c);
if(a>b){
if(a>c)
printf("a is greater\n");
}
else{
if(b>c){
if(b>a){
printf("b is greater\n");
}
}
else{
printf("c is greater\n");
}
}
}


