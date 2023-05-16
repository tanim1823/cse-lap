#include <stdio.h>
int main()
{
    int userInput, count = 0;
    printf("Enter any number: ");
    scanf("%d", &userInput);

    for (int i = 2; i < userInput; i++)
    {
        if (userInput % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        printf("Entered number %d is prime\n", userInput);
    }
    else
    {
        printf("Entered number %d is not prime\n", userInput);
    }
    return 0;
}