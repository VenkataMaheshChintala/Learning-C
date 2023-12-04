/* This question is printing in wave format
   1 2 3 4 
   5 6 7 8        -->    1 2 3 4 8 7 6 5 9 10 11 12
   9 10 11 12*/
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the no.of rows and columns : ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements in the matrix : ");
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<m;i++)
    {
        if(i==0) for(int j=0;j<n;j++) printf("%d ",a[i][j]);
        if((i%2)!=0 && i!=0)
        {
            int x=n-1;
            for(int j=0;j<n/2;j++)
            {
                int t = a[i][j];
                a[i][j] = a[i][x];
                a[i][x] = t;
                x--;
            }
            for(int j=0;j<n;j++) printf("%d ",a[i][j]);
        }
        if((i%2)==0 && i!=0)
        {
            for(int j=0;j<n;j++) printf("%d ",a[i][j]);
        }
    }
    return 0;
}