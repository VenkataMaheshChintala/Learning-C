#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int ld;
    ld = (x%10);
    printf("Last digit is %d\n",ld);
    while(x>10)
    {
        x = (x/10);
    }
    printf("First digit is %d\n",x);
    int sum;
    sum = ld + x;
    printf("Sum of first digit and last digit is %d",sum);
    return 0;
}