#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no.of rows in square matrix : ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements in matrix : ");
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j) a[i][j] = 0;
        }
    }
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}