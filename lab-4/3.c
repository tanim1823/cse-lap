#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += pow(i, 2);
    }
    printf("Sum = %d\n", sum);
    return 0;
}
