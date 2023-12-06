// it is a sparse matrix if no.of zeroes in amtrix is greater than no.of non-zero elements in the matrix
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the no.of rows and columns in matrix 1 : ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements in matrix : ");
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    int zc=0; // zero count
    int nzc=0; // non zero count
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++) 
        {
            if(a[i][j]==0) zc++;
            else nzc++;
        }
    }
    if(zc>nzc) printf("It is a sparse matrix");
    else printf("It is not a sparse matrix");
    return 0;
}