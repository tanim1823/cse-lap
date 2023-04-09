#include <stdio.h>
int main()
{
    int n = 100, sum = 0;
    for (int i = 5; i <= n; i += 5)
    {
        sum += i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}