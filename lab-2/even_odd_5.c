#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number to check even or odd: ");
    scanf("%d", &number);
    // Using modulus operator
    printf("\tUsing modulus operator\n");
    if (number % 2 == 0)
        printf("%d is a even number\n", number);
    else
        printf("%d is a odd number\n", number);

    // using bitwise operator
    printf("\tUsing Bitwise operator\n");
    if ((number & 1) == 0)
        printf("%d is a even number\n", number);
    else
        printf("%d is a odd number\n", number);

    // without using bitwise and modulus operator
    printf("\twithout using bitwise and modulus operator\n");
    if ((number / 2) * 2 == number)
        printf("%d is a even number\n", number);
    else
        printf("%d is a odd number\n", number);

    // using conditional operator.
    printf("\tusing conditional operator.\n");
    number % 2 == 0 ? printf("%d is a even number\n", number) : printf("%d is a odd number\n", number);

    return 0;
}
