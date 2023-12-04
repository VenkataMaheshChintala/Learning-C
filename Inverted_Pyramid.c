//   * * * * * * * * * 
//     * * * * * * * 
//       * * * * * 
//         * * * 
//           * 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int a=(n*2)-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("  ");
        }
        for(int x=1;x<=a;x++)
        {
            printf("* ");
        }
        a-=2;
        printf("\n");
    }
    return 0;
}