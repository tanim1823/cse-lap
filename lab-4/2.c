#include <stdio.h>
int main()
{
    int n = 1024, sum = 0;
    for (int i = 1; i <= n; i *= 2)
    {
        sum += i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}