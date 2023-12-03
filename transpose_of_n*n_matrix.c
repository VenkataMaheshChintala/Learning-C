// This program finds the transpose of the matrix without using any extra matrix if no.of rows = no.of columns.
#include <stdio.h>
int main()
{
    int m;
    printf("Enter the no.of rows/columns in the matrix : ");
    scanf("%d",&m);
    int a[m][m],t=0,s=0;
    printf("Enter the elements in the matrix : ");
    for(int i=0;i<m;i++) for(int j=0;j<m;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            t = a[i][j];
            s = a[j][i];
            a[j][i] = t;
            a[i][j] = s;
        }
    }
    printf("The resultant matrix is : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++) printf("%d ",a[j][i]);
        printf("\n");
    }
    return 0;
}