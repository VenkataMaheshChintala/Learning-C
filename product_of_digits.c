#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int ld ;
    int pro = 1;
    while(x>0)
    {
        ld = (x%10);
        pro = pro * ld;
        x = x/10;
    }
    printf("%d",pro);
    return 0;
}