// 1
// 1 2
// 1 2 3
// 1 2 3 4
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no.of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int y=1;y<=i;y++)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
    return 0;
}