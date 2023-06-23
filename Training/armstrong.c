#include<stdio.h>
#include<math.h>
int main(){
    int num,count=0;
    int sum=0;
    printf("Enter the number;\n");
    scanf("%d",&num);
    int c=num;
    int d=num;
    // if(num<10){
    //     printf("Armstrong\n");
    //     exit(0);
    // }
    while(num>0){
      num=num/10;
      count++;
    }
    int f=0;
    while(c>0){
        f=c%10;
        sum=sum+pow(f,count);
        c=c/10;
        printf("%d\n",sum);
    }
    if(d==sum){
        printf("Armstrong number\n");
    }
    else{
       printf("Not armstrong\n");
    }

    
    return 0;
}
