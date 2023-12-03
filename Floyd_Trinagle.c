//1
//2 3
//4 5 6
//7 8 9 10
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    int x = 1;
    for(int i=1;i<=n;i++)
    {
        for(int y=1;y<=i;y++)
        {
            printf("%d ",x);
            x = x + 1;
        }
        printf("\n");
    }
    
    return 0;
}