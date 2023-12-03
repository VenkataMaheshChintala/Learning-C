// * 
// * * 
// * * * 
// * * * * 
// * * * 
// * * 
// * 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int a=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=(n-1);i++)
    {
        
        for(int j=1;j<=a;j++)
        {
            printf("* ");
        }
        a--;
        printf("\n");
    }
    return 0;
}