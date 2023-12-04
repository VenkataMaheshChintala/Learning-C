// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no.of lines : ");
    scanf("%d",&n);
    int x=n;
    for(int i=1;i<=n;i++)
    {
        for(int y=1;y<=x;y++)
        {
            printf("%d ",y);
        }
        x = x - 1;
        printf("\n");
    }
    return 0;
}