#include<stdio.h>
void main(){
int marks;
printf("Enter the mark:\n");
scanf("%d",&marks);
if(marks>85){
printf("Benki bro\n");
}
else if(marks<85 && marks>75){
printf("First class\n");
}
else if(marks<75&&marks>65){
printf("Second class\n");
}
else if(marks<65&&marks>=35){
printf("PASS\n");
}
else if(marks<35){
printf("Hoge bro\n");
}
else{
printf("wrong input\n");
}

}
