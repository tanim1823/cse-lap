#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number to check even or odd: ");
    scanf("%d", &number);
    printf("\tUsing Bitwise operator\n");
    if ((number & 1) == 0)
        printf("%d is a even number\n", number);
    else
        printf("%d is a odd number\n", number);
    return 0;
}