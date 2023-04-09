#include <stdio.h>
#include <math.h>
int main()
{
    float principle, rate, time, compount_interest;

    printf("Enter the principle: ");
    scanf("%f", &principle);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time :");
    scanf("%f", &time);

    compount_interest = principle * pow((1 + rate / 100), time) - principle;

    printf("\nThe compound interest is %0.3f", compount_interest);
    return 0;
}