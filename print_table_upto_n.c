#include <stdio.h>
int main() {
    int n;
    printf("Input upto table starting from 1 : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d * %d = %d, ",i,j,j*i);
        }
        printf("\n");
    }
    return 0;
}