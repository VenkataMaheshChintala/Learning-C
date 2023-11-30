#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    int num = x;
    int ld = 0;
    int rev = 0;
    while(x>0)
    {
        rev = rev + (x%10);
        rev = rev * 10;
        x = x/10;
    }
    rev = rev/10;
    if (rev == num)
    {
        printf("The number is a palindrome");
    }
    else 
    {
        printf("The number is not a palindrome");
    }
    return 0;
}