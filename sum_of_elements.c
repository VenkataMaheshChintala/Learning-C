#include <stdio.h>
int main()
{
    int a[5],n,sum=0;
    printf("Enter n value : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("The sum is %d",sum);
    return 0;
}