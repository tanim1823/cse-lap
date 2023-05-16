#include <stdio.h>
#include <math.h>
int main()
{
    int count = 1;
    for (int i = 1; i <= 8; i++)
    {
        printf("%d ", count);
        if (i % 3 == 0)
        {
            count++;
        }
        else
        {
            count += 2;
        }
    }

    return 0;
}