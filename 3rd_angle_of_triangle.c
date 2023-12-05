#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two angles of triangle : ");
    scanf("%d %d",&a,&b);
    int angle;
    angle = 180-(a+b);
    printf("The other angle is %d",angle);
    return 0;
}