
#include<stdio.h>
#include<math.h>
void main(){
       int size;
    double a[size];
 
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("enter the array element:\n");
    for(int i=0;i<size;i++){
        scanf("%lf",&a[i]);
    }
    printf("The elements of array is:\n");
    for(int j=0;j<size;j++){
        printf("%lfd\n",floor(a[j]));
    }
}