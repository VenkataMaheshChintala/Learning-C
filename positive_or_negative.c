#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>0) printf("The number is even");
    else if(n==0) printf("The number is neither even nor odd");
    else printf("The number is odd");
    return 0;
}