#include<stdio.h>
#define N 50
int main()
{
 int a[N][N],b[N][N],c[N][N],m,n,p,q,i,j,sum,k;
 printf("enter the number of rows and coloums of matrix 1:");
 scanf("%d %d",&m,&n);
 printf("enter the number of rows and coloums of matrix 2:");
 scanf("%d %d",&p,&q);
 printf("enter the values of matrix 1:");
 for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the values of matrix 2:");
 for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
printf("matrix 1 is:\n");
 for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("matrix 2 is:\n");
 for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}
if(n!=p)
{
    printf("the multiplication is not possible\n");
}
else{
    for(i=0;i<m;i++)
    {
        
        for(j=0;j<q;j++)
        {
            sum=0;
            for(k=0;k<m;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
             c[i][j]=sum; 
        } 
         
    }

printf("multiplication of matrix is :\n");
 for(i=0;i<m;i++)
{
    for(j=0;j<q;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
}
return 0;
}