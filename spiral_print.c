/* 1 2 3 4
   5 6 7 8 
   9 10 11 12        -->    1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
   13 14 15 16*/
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the no.of rows and columns : ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements in the matrix : ");
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    int minrow=0,maxrow=m-1,mincol=0,maxcol=n-1,totcount=m*n,count=0;
    while(count<totcount)
    {
        for(int j=mincol;j<=maxcol;j++)
        {
            printf("%d ",a[minrow][j]);
            count++;
        }
        minrow++;
        if(count>totcount) break;
        for(int i=minrow;i<=maxrow;i++)
        {
            printf("%d ",a[i][maxcol]);
            count++;
        }
        maxcol--;
        if(count>totcount) break;
        for(int j=maxcol;j>=mincol;j--)
        {
            printf("%d ",a[maxrow][j]);
            count++;
        }
        maxrow--;
        if(count>totcount) break;
        for(int i=maxrow;i>=minrow;i--)
        {
            printf("%d ",a[i][mincol]);
            count++;
        }
        mincol++;
    }
    return 0;
}