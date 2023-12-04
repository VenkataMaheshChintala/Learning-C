// 1 2 3 4 5 6 7 8 9 
// 1 2 3 4   6 7 8 9 
// 1 2 3       7 8 9 
// 1 2           8 9 
// 1               9 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int nst=n-1;
    int nst1=n-1;
    int nsp1=1;
    int nsp=1;
    int x=0;
    for(int i=1;i<=(n*2)-1;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        x=0;
        // for stars
        for(int j=1;j<=nst;j++)
        {
            printf("%d ",j);
            x++;
        }
        nst--;
        // for spaces
        for(int j=1;j<=nsp;j++)
        {
            printf("  ");
            x++;
        }
        x=x+1;
        nsp+=2;
        for(int k=1;k<=nst1;k++)
        {
            printf("%d ",x);
            x++;
        }
        nst1--;
        printf("\n");
    }
    return 0;
}