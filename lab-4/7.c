#include <stdio.h>
#include <math.h>
int main()
{
    int a = 1, b = 0, x = a + b;
    printf("%d ", a);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", x);
        b = a;
        a = x;
        x = a + b;
    }

    return 0;
}