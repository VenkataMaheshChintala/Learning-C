#include <stdio.h>
int main ()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int count = 0;
    while (x!=0)
    {
        x=x/10;
        count++;
    }
    printf("The no.of digits are %d",count);
    return 0;
}