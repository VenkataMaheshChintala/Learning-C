#include <stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter the no.of rows and columns in matrix 1 : ");
    scanf("%d %d",&m,&n);
    printf("Enter the no.of rows and columns in matrix 2 : ");
    scanf("%d %d",&p,&q);
    int a[m][n],b[p][q];
    if(m==p && p==q)
    {
        int count=0,pcount=m*n;
        printf("Enter the elements in matrix 1 : ");
        for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
        printf("Enter the elements in matrix 2 : ");
        for(int i=0;i<p;i++) for(int j=0;j<q;j++) scanf("%d",&b[i][j]);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j] == b[i][j]) count++;
            }
        }
        if(count == pcount) printf("The given matrices are equal");
        else printf("The given matrices are not equal");
    }
    else printf("The given matrices are not equal");
    return 0;
}