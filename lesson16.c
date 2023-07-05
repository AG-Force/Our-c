#include <stdio.h>
#include <stdlib.h>
#include <math.h>>
int main ()
{

    /*
    int A, N;
    do {
        printf("Enter a base number: "); // Prompting the user to enter a base number
        scanf("%d", &A); // Reading the base number from the user
        printf("Enter an exponent: "); // Prompting the user to enter an exponent
        scanf("%d", &N); // Reading the exponent from the user
    } while (A == 0); // Repeating the loop until a non-zero base number is entered

    if (N == 0) {
        printf("answer: %d", 1); // If the exponent is 0, the answer is always 1
    }
    else {
        double i, result = 1;
        // If N is positive, assign its value to i; otherwise, assign the absolute value of N to i
        if (N > 0) {
            i = N;
        }
        else {
            i = -N;
        }
        while (i > 0) {
            result = result * A; // Calculating the result by multiplying the base number repeatedly
            i--;
        }
        if (N > 0) {
            printf("answer: %d", result); // If the exponent is positive, print the result as an integer
        }
        else {
            printf("answer: %lf", 1 / result); // If the exponent is negative, print the reciprocal of the result as a floating-point number
        }
    }

    */
///////////////////////////////////////////////
int i = pow(3,2);
printf("%d", i);


    return 0;
}
