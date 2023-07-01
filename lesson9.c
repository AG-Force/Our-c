#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    // Prompt the user to enter a number
    printf("Enter the number: ");
    // Read the number entered by the user
    scanf("%d", &a);

    // Check if the number is negative
    if (a < 0)
        printf("%d", -1 * a);
    // If the number is not negative, print the number
    else
        printf("%d", a);

    // Separate the two sections of code with a comment

    int a2;

    // Prompt the user to enter another number
    printf("Enter the number: ");
    // Read the number entered by the user
    scanf("%d", &a2);

    // Check if the number is negative
    if (a2 < 0) printf("%d", -1 * a2);
    // If the number is not negative, print the number
    else        printf("%d", a2);

    return 0;
}
