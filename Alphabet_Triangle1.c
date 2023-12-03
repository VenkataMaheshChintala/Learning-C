//         A 
//       A B 
//     A B C 
//   A B C D 
// A B C D E 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no.of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            printf("  ");
        }
        char ch =65;
        for(int x=1;x<=i;x++)
        {
            printf("%c ",ch);
            ch = ch+1;
        }
        printf("\n");
    }
    return 0;
}