//insertion sort
#include<stdio.h>
void insertionsort(int a[],int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main()
{
   int a[5]={10,50,30,40,20};
   insertionsort(a,5);
   for(int i=0;i<5;i++){
    printf("%d\t",a[i]);
   }
   return 0;
}