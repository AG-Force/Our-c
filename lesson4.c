#include <stdio.h>

int main()
{
    char name[30]; // Declare a character array named "name" with a size of 30 characters.

    printf("enter the name: "); // Print a prompt to ask the user to enter a name.
    scanf("%s", name); // Read the entered name and store it in the variable "name".

    printf("the name: %s", name); // Print the stored name on the screen.

    return 0;
}
