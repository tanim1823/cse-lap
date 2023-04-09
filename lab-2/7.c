#include <stdio.h>
int main()
{
    int birthYear, currentYear, age;
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);
    printf("Enter current year: ");
    scanf("%d", &currentYear);
    age = currentYear - birthYear;
    printf("Age is = %d years old\n", age);
    return 0;
}