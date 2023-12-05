// This code converts the no.of days entered to years, weeks and days.
#include <stdio.h>
int main()
{
    int days;
    printf("Enter no.of days : ");
    scanf("%d",&days);
    int years;
    years = days/365;
    printf("%d years, ",years);
    int weeks;
    weeks = days-(years*365);
    weeks = weeks/7;
    printf("%d weeks, ",weeks);
    int days1;
    days = days-(years*365)+(weeks*7);
    printf("%d days",days1);
    return 0;
}