#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int b[n],a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("Elements in a are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nElements in other array are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    
    return 0;
}