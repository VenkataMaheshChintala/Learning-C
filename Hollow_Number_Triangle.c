//1
//1 2
//1 2 3
//1 2 3 4 
//1 2 3 4 5
#include <stdio.h>
int main() {
    int n;
    printf("Enter the no.of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==n || j==1 || i==j) {
                printf("%d ",j);
            }
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}