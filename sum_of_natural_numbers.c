#include <stdio.h>
int main()
{
    int inp;
    printf("Enter the no.of numbers : ");
    scanf("%d",&inp);
    int sum=0;
    for(int i=1;i<=inp;i++)
    {
        sum = sum + i;
    }
    printf("The sum is %d",sum);
    return 0;
}