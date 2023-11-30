#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number  : ");
    scanf("%d",&x);
    int sum = 0;
    for(int i=1;i<x;i++)
    {
        if((x%i)==0)
        {
            sum = sum + i;
        }
    }
    if(sum==x)
    {
        printf(" The number is a perfect number ");
    }
    else
    {
        printf("The number is not a perfect number ");
    }
    return 0;
}