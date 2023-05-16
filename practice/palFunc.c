#include <stdio.h>
#include <string.h>
void strCopy(char strCopy[100], char strMain[100])
{
    int length = strlen(strMain);
    printf("Length = %s\n", strCopy);
    for (int i = 0; i <= length - 1; i++)
    {
        strCopy[i] = i;
    }
    printf("Length = %s\n", strCopy);
}
int isPalindrome(char str)
{
}
int main()
{
    char str1[100], str2[100];
    printf("Enter a string: ");
    scanf("%s", str1);

    strCopy(str2, str1);
    printf("main = %s \t copy = %s", str1, str2);
    // /** Copy str1 in str2*/
    // strcpy(str2, str1);
    // /** Reverse str2*/
    // strrev(str2);

    // if (!strcmp(str1, str2))
    // {
    //     printf("%s is palindrome\n", str1);
    // }
    // else
    // {
    //     printf("%s is not palindrome\n", str1);
    // }

    printf("\n");

    return 0;
}