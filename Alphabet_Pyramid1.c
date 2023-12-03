//         A 
//       A B A 
//     A B C B A 
//   A B C D C B A 
// A B C D E D C B A 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines : ");
    scanf("%d",&n);
    int x;
    char ch;
    char y;
    for(int i=1;i<=n;i++)
    {
        x=i;
        ch = 65;
        for(int j=1;j<=(n-i);j++)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        y=ch-2;
        ch=65;
        x=i-1;
        for(int k=1;k<=(i-1);k++)
        {
            printf("%c ",y);
            y--;
        }
        printf("\n");
    }
    return 0;
}