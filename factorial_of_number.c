#include <stdio.h>
int main()
{
    int pro, x;
    printf("Enter a number : ");
    scanf("%d",&x);
    pro = 1;
    if(x==0) printf("Factorial is 1\n");
    else if(x<0) printf("Factorial is not for negative numbers \n");
    else for(int i=1;i<=x;i++) pro*=i;
    printf("Factorial is %d ",pro);
    return 0;
}