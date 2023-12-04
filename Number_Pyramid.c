//         1 
//       1 2 3 
//     1 2 3 4 5 
//   1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 8 9 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int nst=1;
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=nst;j++)
        {
            printf("%d ",x);
            x=x+1;
        }
        x=1;
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}