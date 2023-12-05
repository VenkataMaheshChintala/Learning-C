// This code is to find area of an equilateral triangle when side of the traingle is given as input.
#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the length of side : ");
    scanf("%d",&side);
    float area;
    area = (sqrt(3)/4)*(side*side);
    printf("The area of the trinagle is %.3f",area);
    return 0;
}