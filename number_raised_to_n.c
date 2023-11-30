#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the 1st number : ");
    scanf("%d",&x);
    printf("Enter the 2nd number : ");
    scanf("%d",&y);
    int power = 1;
    for (int i = 1;i<=y;i++)
    {
        power = power * x;
        printf("%d raised to %d is %d\n",x ,i ,power);
    }
    return 0;
}