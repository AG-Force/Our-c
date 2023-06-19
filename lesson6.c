#include <stdio.h>

int main()
{
    int age, year, year_current;

    // Prompting the user to enter their birth year
    printf("Enter your birth year: ");
    scanf("%d", &year);

    // Prompting the user to enter the current year
    printf("Enter the current year: ");
    scanf("%d", &year_current);

    // Calculating the age by subtracting the birth year from the current year
    age = year_current - year;

    // Displaying the calculated age
    printf("Your age is: %d", age);

    return 0;
}
