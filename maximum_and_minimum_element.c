#include <stdio.h>
int main() 
{
    int max,min,n;
    printf("Enter n value : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max) max = a[i];
        if(a[i]<min) min = a[i];
    }
    printf("max = %d\nmin = %d",max,min);
    return 0;
}