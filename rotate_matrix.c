#include <stdio.h>
int main()
{
    int a[5][5],b[5][5],m,n;
    printf("Enter the no.of rows and columns : ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements in the matrix : ");
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
            b[j][i]=a[i][j];
        }
    }
    int x = m-1,y=0,temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m/2;j++)
        {
            temp = b[i][x];
            b[i][x] = b[i][y];
            b[i][y] = temp;
            y++;
            x--;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}