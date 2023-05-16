#include <stdio.h>
#include <math.h>
int main()
{
    float numbers[10], sum = 0, average = 0;
    printf("Enter 10 floating number\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d no index: ", i);
        /** takes input from and insert in array*/
        scanf("%f", &numbers[i]);
        /** Sumation */
        sum += numbers[i];
    }

    for (int i = 0; i < 10; i++)
    {
        /** Display numbers from array*/
        printf("%.2f ", numbers[i]);
    }

    /** Average number*/
    average = sum / 10;
    printf("\nSumation = %.2f\n", sum);
    printf("\nAverage= %.2f\n", average);

    return 0;
}