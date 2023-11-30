#include <stdio.h>
#include <math.h>
int main()
{
    int x ;
    printf("Enter the number : ");
    scanf("%d",&x);
    int y=x;
    int nod = 0;
    int temp=x;
    while (temp>0)
    {
        nod = nod + 1;
        temp/=10;
    }
    int digi = 0;
    int sum = 0;
    temp=x;
    while(temp>0)
    {
        digi = (temp%10); 
        sum = sum + (pow(digi, nod));
        temp/=10;
    }
    if (sum == y)
    {
        printf("The number is an armstrong number ");
    }
    else 
    {
        printf("The number is not an armstrong number ");
    }
    return 0;
}