//           * 
//         * * * 
//       * * * * * 
//     * * * * * * * 
//   * * * * * * * * * 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || j==n || i<=j)
            {
                printf("  ");
            }
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
            x++;
        }
        for(int j=2;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}