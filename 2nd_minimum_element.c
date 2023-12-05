#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no.of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array : ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int max=a[0];
    int min=a[0],pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min) 
        {
            min = a[i];
            pos = i;
        }
    }
    int temp = a[n-1];
    a[n-1] = a[pos];
    a[pos] = temp;
    min = a[0];
    for(int i=0;i<n-1;i++) if(a[i]<min) min = a[i];
    printf("The second minimum element is %d ",min);
    return 0;
}