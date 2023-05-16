#include <stdio.h>
#include <math.h>
int main()
{
    float ages[10], sum = 0, mean = 0;
    printf("Enter 10 present ages\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d no index: ", i);
        /** takes input from and insert in array*/
        scanf("%f", &ages[i]);
        /** Sumation */
        sum += ages[i];
    }

    /** Average ages*/
    mean = sum / 10;
    printf("\nSumation = %.2f\n", sum);
    printf("\nMean of ages= %.2f\n", mean);

    return 0;
}