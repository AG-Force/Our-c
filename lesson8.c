#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    
    // Prompt the user to enter a number
    printf("Enter the number: ");
    
    // Read the number entered by the user
    scanf("%d", &N);
    
    // Check if the number is even
    if (N % 2 == 0) {
        printf("The number is even :) ");
    }
    // Check if the number is odd
    else if (N % 2 == 1) {
        printf("The number is odd ");
    }
    
    return 0;
}
