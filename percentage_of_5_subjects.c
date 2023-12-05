#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5;
    printf("Enter marks of subject 1 : ");
    scanf("%f",&m1);
    printf("Enter marks of subject 2 : ");
    scanf("%f",&m2);
    printf("Enter marks of subject 3 : ");
    scanf("%f",&m3);
    printf("Enter marks of subject 4 : ");
    scanf("%f",&m4);
    printf("Enter marks of subject 5 : ");
    scanf("%f",&m5);
    float first= (m1+m2+m3+m4+m5)/500;
    float per=first*100;
    printf("The percentage is %f",per);
    return 0;
}