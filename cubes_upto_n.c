#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int cube;
    for(int i=1;i<=n;i++)
    {
        cube = pow(i,3);
        printf("Number is : %d and cube of %d is : %d\n",i,i,cube);
    }
    return 0;
}