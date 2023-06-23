#include<stdio.h>
#include<conio.h>
void main(){
    int a[100],size,max,min;
    printf("Enter the array size:\n");
    scanf("%d",&size);
    a[size];
    printf("Enter the elements of array:\n");
    for(int i=0;i<size;i++){
           scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(int j=0;j<size;j++){
      if(a[j]>max){
        max=a[j];
      }
      else if(a[j]<min){
        min=a[j];
      }
    }
    printf("The maximun in array %d and minimum in array is %d",max,min);
}