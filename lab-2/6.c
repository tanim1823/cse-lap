#include <stdio.h>
int main()
{
    int userInput, year, month, day;
    printf("Enter a number: ");
    scanf("%d", &userInput);
    year = userInput / 365;
    month = (userInput - year * 365) / 30;
    day = (userInput - year * 365) - (month * 30);
    printf(" Years: %d\n Month: %d\n Days: %d\n", year, month, day);
    return 0;
}