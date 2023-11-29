#include <stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter the no.of rows and columns in matrix 1 : ");
    scanf("%d %d",&m,&n);
    printf("Enter the no.of rows and coluns in  matrix 2 : ");
    scanf("%d %d",&p,&q);
    int a[m][n],b[p][q],c[m][n];
    printf("Enter the elements in matrix 1 : ");
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    printf("Enter the elements in matrix 2 : ");
    for(int i=0;i<p;i++) for(int j=0;j<q;j++) scanf("%d",&b[i][j]);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("\nThe resultant matrix is :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}