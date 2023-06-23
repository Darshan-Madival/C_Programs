#include<stdio.h>
int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}
void leftRoatate(int a[],int n,int k){
    int i,j,d,temp;
    int sets=gcd(n,k);

    for(i=0;i<sets;i++){
        j=i;
        temp=a[i];

        while(1){
            d=j+k;
            if(d>=n){
                d=d-n;
            }
            if(d==i){
                break;
            }
            a[j]=a[d];
            j=d;
        }
        a[j]=temp;
    }
}
int main()
{
   int arr[50];
   int i,n,k;
   printf("Enter the sixe:\n");
   scanf("%d",&n);

   printf("Enter Array elemets:\n");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   printf("Enter Rotation:\n");
   scanf("%d",&k);

   printf("Enter the Rotation:\n");
   for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
   }
    leftRoatate(arr,n,k);
    printf("After Rotation:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
   return 0;
}