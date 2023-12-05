// This code is to convert the temperature from celsius to fahrenheit.
#include <stdio.h>
int main()
{
    float cel, fah;
    printf("Enter the temperature in celsius : ");
    scanf("%f",&cel);
    fah = (cel * (1.8)) + 32;
    printf("The temperature in fahrenheit is %f",fah);
    return 0;
}