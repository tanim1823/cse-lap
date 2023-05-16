#include <stdio.h>
int main()
{
    int count = 0;
    for (int i = 1; i <= 8; i++)
    {
        printf("%d ", count);
        if (i % 2 == 0)
        {
            count++;
        }
        else
        {
            count += 3;
        }
    }

    return 0;
}