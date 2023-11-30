#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int y = x;
    int ld;
    int fd = 0;
    while(x>0)
    {
        fd = (x%10);
        x = x/10;
    }
    ld = (y%10); // ld = 5
    y = (y/10); // x = 1234
    int rev = 0;
    while (y>0)
    {
        rev = rev + (y%10);
        rev = rev * 10;
        y = y/10;
    }
    rev = rev/100;
    int rev1=0;
    while(rev>0)
    {
        rev1 = rev1 + (rev%10);
        rev1 = rev1 * 10;
        rev = rev/10;
    }
    rev1 = rev1 / 10;
    printf("The swapped number is : ");
    printf("%d",ld);
    printf("%d",rev1);
    printf("%d",fd);
    return 0;
}