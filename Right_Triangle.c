// *
// * *
// * * *
// * * * *
#include <stdio.h>
int main()
{
    int x;
    printf("Enter no.of lines : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for (int y = 1;y<=i;y++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}