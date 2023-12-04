// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
#include <stdio.h>
int main() {
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int a=n;
    int b=2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf("* ");
        }
        a--;
        printf("\n");
    }
    for(int i=1;i<=(n-1);i++)
    {
        for(int j=1;j<=b;j++)
        {
            printf("* ");
            if(b>n) break;
        }
        b++;
        printf("\n");
    }
    return 0;
}