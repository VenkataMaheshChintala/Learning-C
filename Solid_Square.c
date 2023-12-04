// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
#include <stdio.h>
int main()
{
    int rc;
    printf("Enter no.of rows : ");
    scanf("%d",&rc);
    for (int i=1;i<=rc;i++)
    {
        for(int x=1;x<=rc;x++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
