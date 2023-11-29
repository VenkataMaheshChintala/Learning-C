#include <stdio.h>
int main()
{
    int n,ele,pos;
    printf("Enter the no.of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to insert : ");
    scanf("%d",&ele);
    printf("Enter the position where you want to insert the element : ");
    scanf("%d",&pos);
    n=n+1;
    for(int i=n;i>pos;i--)
    {
        a[i-1]=a[i-2];
    }
    a[pos-1]=ele;
    printf("The elements in the new array are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}