#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    long long int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += pow(i, i);
    }
    printf("Sum = %lld\n", sum);
    return 0;
}
