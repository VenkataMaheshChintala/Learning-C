#include <stdio.h>
int main()
{
    int A[5][5],B[5][5],C[5][5],a,b,c,d;
    printf("Enter the no.of rows and columns in array 1 : ");
    scanf("%d %d",&a,&b);
    printf("Enter the no.of rows and columns in array 2 : ");
    scanf("%d %d",&c,&d);
    printf("Enter the elements in array 1 : ");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements in array 2 : ");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    if(a==c && b==d)
    {
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
            }
        }    
        printf("The resultant array is : \n");
        for(int i=0;i<a;i++)
        {  
            for(int j=0;j<b;j++)
            {
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    else printf("Addition is not possible");
    return 0;
}