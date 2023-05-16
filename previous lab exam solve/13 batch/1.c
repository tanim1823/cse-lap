#include <stdio.h>
int main()
{
    float marks[5], total, average = 0, height, lowest;
    printf("Enter marks of five subjects: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &marks[i]);
    }

    return 0;
}