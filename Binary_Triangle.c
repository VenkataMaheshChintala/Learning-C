// 0
// 1 0
// 0 1 0
// 1 0 1 0
// 0 1 0 1 0
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++)
    {
        if ((i%2)==0) a=1;
        else a=0;
        for(int y=1;y<=i;y++)
        {
            printf("%d ",a);
            if(a==0) a=1;
            else a=0;
        } 
        printf("\n");
    }
    return 0;
}