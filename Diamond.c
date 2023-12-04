//     * 
//   * * * 
// * * * * * 
//   * * * 
//     * 
// works only for odd number input
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int nst=1;
    int k=(n/2)+1;
    // upper half
    for(int i=1;i<=k;i++)
    {
        // for spaces
        for(int j=1;j<=(k-i);j++)
        {
            printf("  ");
        }
        // for stars
        for(int j=1;j<=nst;j++)
        {
            printf("* ");
        }
        nst = nst+2;
        printf("\n");
    }
    nst = nst-4;
    // lower half
    for(int i=1;i<=k-1;i++)
    {
        // for spaces
        for(int j=1;j<=i;j++)
        {
            printf("  ");
        }
        // for stars
        for(int j=1;j<=nst;j++)
        {
            printf("* ");
        }
        nst = nst - 2;
        printf("\n");
    }
    return 0;
}