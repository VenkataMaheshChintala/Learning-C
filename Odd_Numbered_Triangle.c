// 1
// 1 3
// 1 3 5
// 1 3 5 7
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no.of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int y=1;y<=(i*2);y=y+2)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
    return 0;
}