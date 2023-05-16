#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter a string: ");
    scanf("%s", str1);
    /** Copy str1 in str2*/
    strcpy(str2, str1);
    /** Reverse str2*/
    strrev(str2);

    if (!strcmp(str1, str2))
    {
        printf("%s is palindrome\n", str1);
    }
    else
    {
        printf("%s is not palindrome\n", str1);
    }
    return 0;
}