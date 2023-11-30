#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if((n%i)==0)
        {
            printf("%d ",i);
            sum = sum + i;
        }
    }
    printf("\nThe sum of factors of %d is %d",n,sum);
    return 0;
}