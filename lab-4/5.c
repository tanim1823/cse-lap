#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            sum += i * i * i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
