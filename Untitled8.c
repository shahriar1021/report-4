#include<stdio.h>
int main()
{
    float sub1, sub2, sub3, sub4, sub5, total, average, percentage;
    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
    total = sub1+sub2+sub3+sub4+sub5;
    average = total/5;
    percentage = (100*total)/500;
    printf("Total = %0.0f \n",total);
    printf("Average = %0.0f \n", average);
    printf("Percentage = %0.2f \n", percentage);
    return 0;
}
