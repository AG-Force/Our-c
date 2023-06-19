#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1 = 10;

    // Checking if a1 is equal to 10
    if (a1 == 10) {
        printf("The number is equal to 10\n");
    } else {
        printf("The number isn't equal to 10!\n");
    }

    int a2 = 7;

    // Checking the value of a2 using multiple conditions
    if (a2 == 10) {
        printf("The number is equal to 10\n");
    } else if (a2 == 2) {
        printf("The number is equal to 2\n");
    } else if (a2 == 3) {
        printf("The number is equal to 3\n");
    } else {
        printf("The number isn't equal to 3 or 1\n");
    }

    return 0;
}
