#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three integer number: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Forward order: %d %d %d\n", a, b, c);
    printf("Revarsed order: %d %d %d\n", c, b, a);
    return 0;
}