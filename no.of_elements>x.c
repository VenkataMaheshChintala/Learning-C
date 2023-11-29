#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no.of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    printf("Enter the element : ");
    scanf("%d",&x);
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>x) count++;
    }
    printf("The no.of elements in the array that are greater than %d are %d",x,count);
    return 0;
}
