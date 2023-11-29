#include <stdio.h>
int main()
{
    int n,pro=1;
    printf("Enter n value : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        pro*=a[i];
    }
    printf("The product is %d",pro);
    return 0;
}
