#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the number : ");
    scanf("%d %d",&n ,&m);
    if(n>m) printf("%d is greater than %d",n ,m);
    else printf("%d is greater than %d",m ,n);
    return 0;
}