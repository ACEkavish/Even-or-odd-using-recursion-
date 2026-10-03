#include <stdio.h>

void display_numbers(int start, int end, int choice)
{
    if (start > end)
    {
        return;
    }

    if ((choice == 1 && start % 2 == 0) ||
        (choice == 2 && start % 2 != 0))
    {
        printf("%d ", start);
    }

    display_numbers(start + 1, end, choice);
}

int main()
{
    int start, end, choice;

    printf("Enter starting value: ");
    scanf("%d", &start);

    printf("Enter ending value: ");
    scanf("%d", &end);

    printf("1. Even numbers\n");
    printf("2. Odd numbers\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2)
    {
        display_numbers(start, end, choice);
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}
