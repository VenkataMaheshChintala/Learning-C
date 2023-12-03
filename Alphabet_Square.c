// A B C D
// A B C D 
// A B C D 
// A B C D
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    int x = 65;
    for(int i=1;i<=n;i++)
    {
        for (char ch = x;ch<(x+n);ch++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}