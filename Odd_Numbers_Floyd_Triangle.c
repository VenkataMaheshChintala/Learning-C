// 1 
// 3 5 
// 7 9 11 
// 13 15 17 19 
// 21 23 25 27 29 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int x = 1;
    for(int i=1;i<=n;i++)
    {
        for(int y=1;y<=i;y++)
        {
            printf("%d ",x);
            x = x + 2;
        }
        printf("\n");
    }
    
    return 0;
}