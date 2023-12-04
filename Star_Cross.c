// *       * 
//   *   *   
//     *     
//   *   *   
// *       * 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if((n%2)!=0)
    {
        for(int i=1;i<=n;i++)
        {
            for(int y=1;y<=n;y++)
            {
                if(i==y || (i+y)==(n+1)) 
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("Program is not executable");
    }
    return 0;
}