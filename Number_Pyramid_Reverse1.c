// 1 2 3 4 5 4 3 2 1 
// 1 2 3 4   4 3 2 1 
// 1 2 3       3 2 1 
// 1 2           2 1 
// 1               1 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int nst=n-1;
    int nst1=n-1;
    int nsp=1;
    int z=((n*2)-1)-n;
    int y =z;
    for(int i=1;i<=(n*2)-1;i++)
    {
        if(i>n)
        {
            printf("%d ",z);
            z--;
        }
        else {
            printf("%d ",i);
        }
    }
    z=((n*2)-1)-n;
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        y=0;
        // for stars
        for(int j=1;j<=nst;j++)
        {
            printf("%d ",j);
            y++;
        }
        nst--;
        // for spaces
        for(int j=1;j<=nsp;j++)
        {
            printf("  ");
        }
        if(y>=n)
        {
            y=y-1;
        }
        nsp+=2;
        for(int k=1;k<=nst1;k++)
        {
            printf("%d ",y);
            y--;
        }
        nst1--;
        printf("\n");
    }
    return 0;
}
