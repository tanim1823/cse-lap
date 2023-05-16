#include <stdio.h>
// Write a program that asks a number and test the number whether it is multiple of 5 or not,divisible by 7 but not by eleven.
int main()
{
    int test_number;
    printf("Enter a test number: ");
    scanf("%d", &test_number);
    if (test_number % 5 == 0 && test_number % 7 == 0 && test_number % 11 != 0)
    {
        printf("test the number %d is multiple of 5 or not, divisible by 7 but not by eleven.\n", test_number);
        printf("Condition Passed\n");
    }
    else
    {
        printf("test the number is %d is not multiple of 5 or not, divisible by 7 but not by eleven.\n", test_number);
        printf("Condition Failed\n");
    }

    return 0;
}
