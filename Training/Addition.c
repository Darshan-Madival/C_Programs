#include<stdio.h>
#include<conio.h>
void main(){
    int a[100][100],b[100][100],sum[100][100],r,c;
    printf("Enter the number of rows:\n ");
    scanf("%d",&r);
    printf("Enter the number of coloums:\n");
    scanf("%d",&c);
    printf("Enter the elements of first matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
     printf("the addition of two matrix is:\n");
       for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("\t%d",sum[i][j]);
        }
        printf("\n");
    }

}