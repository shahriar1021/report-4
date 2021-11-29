#include<stdio.h>
int main()
{
    int days, weeks, year;
    printf("Enter days: ");
    scanf("%d",& days);
    weeks = days/7;
    year = days/365;
    printf("%d",days);
    printf("days = %d year/s, %d week/s and %d day/s",year, weeks, days);
    return 0;
}
