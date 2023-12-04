// * * * * * * 
// *         * 
// * * * * * * 
#include <stdio.h>
int main()
{
    int rows, columns;
    printf("Enter no.of rows and columns : ");
    scanf("%d %d",&rows,&columns);
    for(int i=1;i<=rows;i++)
    {
        for(int y=1;y<=columns;y++)
        {
            if(i==1 || i==rows || y==1 || y==columns)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}