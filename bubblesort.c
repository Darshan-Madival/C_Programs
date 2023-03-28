#include<stdio.h>
int main()
{
    int n,i,j,a[100],temp;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    
    return 0;
}