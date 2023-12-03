// A B C D E F G H I 
// A B C D   F G H I 
// A B C       E F G 
// A B           D E 
// A               C 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int nst=n-1;
    int nst1=n-1;
    int nsp=1;
    char ch=65;
    for(int i=1;i<=(n*2)-1;i++)
    {
        printf("%c ",ch);
        ch++;
    }
    ch=65;
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        ch=65;
        // for stars
        for(int j=1;j<=nst;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        nst--;
        // for spaces
        for(int j=1;j<=nsp;j++)
        {
            printf("  ");
        }
        ch=ch+1;
        nsp+=2;
        for(int k=1;k<=nst1;k++)
        {
            printf("%c ",ch);
            ch++;
        }
        nst1--;
        printf("\n");
    }
    return 0;
}