// * * * * * 
//   * * * * * 
//     * * * * * 
//       * * * * * 
//         * * * * * 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int a=2;
    int b=n;
    for (int i=1;i<=n;i++)
    {
        for(int j=1; j<i; j++)
        {
            printf("  ");
        }
        for(int j=1; j<=n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}