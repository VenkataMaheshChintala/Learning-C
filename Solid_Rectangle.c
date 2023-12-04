// * * * * * * 
// * * * * * * 
// * * * * * * 
// * * * * * * 
#include <stdio.h>
int main()
{
    int rows, columns;
    printf("Enter no.of rows : ");
    scanf("%d",&rows);
    printf("Enter no.of columns : ");
    scanf("%d",&columns);
    for (int i=1;i<=rows;i++)
    {
        for(int y=1;y<=columns;y++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}