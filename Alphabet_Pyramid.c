//         A 
//       A B C 
//     A B C D E 
//   A B C D E F G 
// A B C D E F G H I 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int nst=1;
    char ch=65;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=nst;j++)
        {
            printf("%c ",ch);
            ch = ch + 1;
        }
        ch=65;
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}