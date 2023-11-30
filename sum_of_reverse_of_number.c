#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("Enter a number : ");
    scanf("%d",&x);
    y = x;
    int ld = 0;
    int rev =0;
    while(y>0)
    {
        rev = rev * 10;
        rev = rev + (y%10);
        y = y/10;
    }
    int sum;
    sum = x + rev ;
    printf("Sum of the number is %d", sum);
    return 0;
}