#include <stdio.h>
int main()
{
    int x, y, z, max, min;
    printf("Enter three number: ");
    scanf("%d %d %d", &x, &y, &z);

    // Find Max
    if (x > y)
    {
        if (x > z)
        {
            max = x;
        }
        else
        {
            max = z;
        }
    }
    else
    {
        if (y > z)
        {
            max = y;
        }
        else
        {
            max = z;
        }
    }
    // Find Minimum value
    if (x < y)
    {
        if (x < z)
        {
            min = x;
        }
        else
        {
            min = z;
        }
    }
    else
    {
        if (y < z)
        {
            min = y;
        }
        else
        {
            min = z;
        }
    }

    printf("\nMaximum value is: %d\nMinimum value is %d\n\n", max, min);

    // Check even or odd between max and min number
    max % 2 == 0 ? printf("Maximum value %d is even\n", max) : printf("Maximum value %d is odd\n", max);
    min % 2 == 0 ? printf("Minimum value %d is even\n", min) : printf("Minimum value %d is odd\n", min);

    return 0;
}