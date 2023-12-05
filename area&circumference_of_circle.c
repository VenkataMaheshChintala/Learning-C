// This code is to find area and circumference of circle when radius is given.
#include <stdio.h>
int main()
{
    float pi = 3.14;
    int radius;
    printf("Enter the radius : ");
    scanf("%d",&radius);
    float area;
    area = pi*radius*radius;
    float circum;
    circum = 2*pi*radius;
    printf("The area of the circle is %.2f\n",area);
    printf("The circumference of the circle is %.2f",circum);
    return 0;
}