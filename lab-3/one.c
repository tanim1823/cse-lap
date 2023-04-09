#include <stdio.h>
int main()
{
    int x, y, z, max, min;
    printf("Enter three number: ");
    scanf("%d %d %d", &x, &y, &z);

    if ((x > y) && (x > z))
    {
        max = x;
    }
    else if ((y > x) && (y > z))
    {
        max = y;
    }
    else if ((z > x) && (z > y))
    {
        max = z;
    }

    if ((x < y) && (x < z))
    {
        min = x;
    }
    else if ((y < x) && (y < z))
    {
        min = y;
    }
    else if ((z < x) && (z < y))
    {
        min = z;
    }
    printf("\tMax: %d Min: %d\n", max, min);

    return 0;
}