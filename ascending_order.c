#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n); 
    int a[n],b=0,pos;
    printf("Enter the elements in the array : ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++) 
        {
            if(a[i]>a[j]) 
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    printf("\nThe elements in ascending order is : ");
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}