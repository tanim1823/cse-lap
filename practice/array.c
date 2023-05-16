#include <stdio.h>
#define MAX_LENGTH 100
int main()
{
    system("cls");

    int data[MAX_LENGTH];
    int length = 0;

    int input;
    do
    {
        printf("Menu: \n");
        printf("----------------\n");
        printf("1. Add\n");
        printf("2. Insert\n");
        printf("3. Edit\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Clear\n");
        printf("0. Exit\n");
        printf("----------------\n");
        printf("Enter A Menu: ");
        scanf("%d", &input);
        system("cls");
        printf("------ Result -------\n");
        switch (input)
        {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            printf("Invalid Input\n");
        }
        printf("------ Result End -------\n");

    } while (input != 0);
    system("cls");
    return 0;
}