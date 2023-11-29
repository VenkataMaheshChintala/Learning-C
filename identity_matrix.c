#include <stdio.h>
int main()
{
    int a[5][5],m,n;
    printf("Enter no.of rows and columns : ");
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) a[i][j]=1;
            else a[i][j]=0;
        }
    }
    printf("The identity matrix is : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}