#include <stdio.h>
#include <math.h>
int main()
{
    int n, count = 0;
    float sum = 0, mean = 0;
    printf("How many elements you want to insert: ");
    scanf("%d", &n);
    int elements[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d no index element: ", i);
        /** takes input from user and insert in array*/
        scanf("%d", &elements[i]);
        /** Sumation*/
        sum += elements[i];
    }

    /** Avwerage */
    mean = sum / n;

    for (int i = 0; i < n; i++)
    {
        if (elements[i] > mean)
        {
            count++;
        }
    }

    printf("The number of elements those is greater than mean values: %d\n", count);

    return 0;
}