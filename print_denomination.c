#include <stdio.h>
int main()
{
    int x;
    printf("Enter the amount : ");
    scanf("%d",&x);
    int ld = 0;
    int denom = 1;
    while(x>0)
    {
        ld = (x%10);
        printf("%d * %d\n", ld, denom);
        denom = denom * 10;
        x = x/10;
    }
    return 0;
}