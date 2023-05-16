#include <stdio.h>
#include <math.h>
int main()
{
    long long int userInput, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &userInput);

    for (int i = 1; i <= userInput; i++)
    {
        sum += pow(i, i + 1);
    }

    printf("Sum=%lld\n", sum);

    return 0;
}