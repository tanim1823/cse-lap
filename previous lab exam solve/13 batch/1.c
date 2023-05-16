#include <stdio.h>
int main()
{
    float marks[5], total = 0, average = 0, height, lowest;
    printf("Enter marks of five subjects: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    /** Average marks*/
    average = total / 5;
    /** Find height and lowest number*/
    height = lowest = marks[0];
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > height)
        {
            height = marks[i];
        }

        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    /** Print all thing*/
    printf("Total Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("The Highest Marks = %.2f\n", height);
    printf("The Lowest Marks = %.2f\n", lowest);
    return 0;
}