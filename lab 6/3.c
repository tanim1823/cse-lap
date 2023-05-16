#include <stdio.h>
#include <math.h>
int main()
{
    int n, searchElement, count = 0;
    printf("How many elements you want to insert: ");
    scanf("%d", &n);
    int elements[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d no index element: ", i);
        /** takes input from user and insert in array*/
        scanf("%d", &elements[i]);
    }

    printf("Enter search element: ");
    scanf("%d", &searchElement);

    for (int i = 0; i < n; i++)
    {
        if (elements[i] == searchElement)
        {
            count++;
            printf("Search element %d is located at %d no index\n", searchElement, i);
            break;
        }
    }

    if (!count)
    {
        printf("Search element not exist in list!\n");
    }

    return 0;
}