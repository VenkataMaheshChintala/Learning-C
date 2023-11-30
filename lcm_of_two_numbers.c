#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the two numbers you want to find lcm for : ");
    scanf("%d %d", &x, &y);
    int max, min;
    int pro = 1;
    if (x>y)
    {
        max = x;
        min = y;
    }
    else 
    {
        max = y;
        min = x;
    }
    for(int i=1;i<=min;i++)
    {
        pro = (i*max);
        if((pro%min)==0)
        {
            printf("LCM of %d and %d is %d", min, max, pro);
            break;
        }
    }
    return 0;
}