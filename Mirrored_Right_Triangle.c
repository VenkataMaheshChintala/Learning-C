//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=a) 
            {
                printf("* ");
            }
            else printf("  ");
        }
        a=a-1;
        printf("\n");
    }
    return 0;
}