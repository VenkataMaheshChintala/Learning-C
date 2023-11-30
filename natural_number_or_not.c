#include <stdio.h>
int main()
{
    int x;
    printf("Enter the Number : ");
    scanf("%d",&x);
    if (x>0)
    {
        printf("The number is a natural number");
    }
    else{
        printf("The number is not a natural number");
    }
    return 0;
}