//      *
//      *
//  * * * * *
//      *
//      *  
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int b = n;
    if((b%2)!=0)
    {
        n = n/2;
        n= n+1;
        for(int i=1;i<=b;i++)
        {
            for(int x=1;x<=b;x++)
            {
                if(x==n || i==n)
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
    else
    {
        printf("Program is not executable");
    }

    return 0;
}
