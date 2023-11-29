#include <stdio.h>
int main()
{
    int a[5][5],m,n,sum=0;
    printf("Enter no.of rows and columns : ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements : ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i==j) sum+=a[i][j];
        }
    }
    printf("The trace is : %d ",sum);
    return 0;
}