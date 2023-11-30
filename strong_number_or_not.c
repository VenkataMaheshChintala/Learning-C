#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int y = x; 
    int pro = 1;
    int sum = 0;
    int ld;
    while (x>0)
    {
        ld = x%10;
        for (int i = 1;i<=ld;i++)
        {
            pro = pro * i;
        }
        sum = sum + pro;
        pro = 1;
        x = x/10;
    }
    if (sum == y)
    {
        printf("%d is a strong number ", y);
    }
    else
    {
        printf("%d is not a strong number", y);
    }
    return 0;
}