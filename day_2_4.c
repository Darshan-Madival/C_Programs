#include<stdio.h>
void main(){
    float length,height,radius,base,width;
    int a;
    float result;
    printf("Enter the choice:\n1.Area of triabgle\n2.Area of square\n3.Area of circle\n4.Area of Rectangle\n");
    scanf("%d",&a);
    printf("Enter the length:\n");
    scanf("%f",&length);
    printf("Enter the height:\n");
    scanf("%f",&radius);
    printf("Enter the radius:\n");
    scanf("%f",&radius);
    printf("Enter the base:\n");
    scanf("%f",&base);
    printf("Enter the width:\n");
    scanf("%f",&width);
    switch(a){
        case 1:result=0.5*height*base;
               printf("Area of triangle is %f",result);
               break;
         case 2:result=width*width;
               printf("Area of square is %f",result);
               break;
         case 3:result=3.142*radius*radius;
               printf("Area of triangle is %f",result);
               break;
          case 4:result=length*width;
               printf("Area of rectangle is %f",result);
               break;
        default:printf("error");
                                   
    }

    }
