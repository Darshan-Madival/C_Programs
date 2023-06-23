#include <stdio.h>
#include <math.h>
void main(){
    float a,b,c,d,d1,d2;
    printf("enter a value\n");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
     
    if (d > 0) {
        d1 = (-b + sqrt(d)) / (2 * a);
        d2 = (-b - sqrt(d)) / (2 * a);
        printf("d1 = %f and root2 = %f", d1, d2);
    }
    else if (d == 0) {
        d1 = d2 = -b / (2 * a);
        printf("d1 = d2 = %f;", d1);
    }
    else {
        d1 = -b / (2 * a);
        d2 = sqrt(-d) / (2 * a);
        printf("root1 = %f+%fi and root2 = %f-%fi", d1,d2,d1,d2);
    }
    
}