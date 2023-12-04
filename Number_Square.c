// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4 
// 1 2 3 4 
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the no.of rows : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for (int y = 1;y<=x;y++)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
    return 0;
}