/* 1 2 3
   4 5 6      -->     1 4 7 8 5 2 3 6 9
   7 8 9*/
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the no.of rows and columns : ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements in the matrix : ");
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(int j=0;j<n;j++)
    {
        if(j==0) for(int i=0;i<m;i++) printf("%d ",a[i][j]);
        if((j%2)!=0 && j!=0) for(int i=m-1;i>=0;i--) printf("%d ",a[i][j]);
        if((j%2)==0 && j!=0) for(int i=0;i<m;i++) printf("%d ",a[i][j]);
    }
    return 0;
}