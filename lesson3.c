#include<stdio.h> // include standard input and output library

int main() // start of main function
{
    float x = 1.5; // declare a float variable named 'x' and assign it a value of 1.5
    printf("%f \n", x); // print the value of 'x' with a new line at the end. It will print all the decimal points present in the float value

    //////////////////////////////////
    // blank comment for separation
    //////////////////////////////////

    float y = 1.6; // declare another float variable named 'y' and assign it a value of 1.6
    printf("%.2f\n", y); // print the value of 'y' with a precision of 2 decimal places. It will round off the value if it has more than 2 decimal places

    //////////////////////////////////
    // blank comment for separation
    //////////////////////////////////

    double z = 1.7; // declare a double variable named 'z' and assign it a value of 1.7
    printf("%.2lf", z); // print the value of 'z' with a precision of 2 decimal places. It will round off the value if it has more than 2 decimal places

    return 0; // end of main function with a return value of 0 (commonly used to indicate successful execution of the program)
} // end of main function block
