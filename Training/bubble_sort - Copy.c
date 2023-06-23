#include<stdio.h>
int main(){
    int a[5]={10,20,40,50,60};
    for(int i=0;i<5;i++){
        int swapped=0;
        for(int j=0;j<5;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0){
        printf("No need to swap it's already swapped\n");
        break;
    }
    }
    
    for(int k=0;k<5;k++){
        printf("%d\n",a[k]);
    }
    return 0;
}