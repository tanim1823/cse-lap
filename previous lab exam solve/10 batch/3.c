#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2, y1, y2, distance = 0;
    printf("Enter x1 , y1 , x2 , y2: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    printf("Distance between the said points: %.4f\n", distance);

    return 0;
}