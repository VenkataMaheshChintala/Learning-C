// A 
// A B 
// A B C 
// A B C D 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no.of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(char ch = 65;ch<(65+i);ch++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}
