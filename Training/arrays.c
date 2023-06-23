#include<stdio.h>
int main(){
    int a[5]={5,4,3,2,1};
    int sum=0;
    int max=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>=max){
            max=a[i];
        }
        else{
            sum=sum+a[i];
        }
    }
    printf("The minimum sum of array is %d\n",sum);
    printf("The maximun sum of array is %d\n",sum+max);
    
    return 0;
}