#include<stdio.h>
#include<stdlib.h>

int main ()
{
    /*
    // This is a simple loop that prints the numbers from 1 to 10 inclusive.
    // After each number printed, it waits for a character input (getchar).
    // The loop will not proceed until a character is inputted due to getchar().
    for (int i = 1; i<11;i++){
        printf("%d\n", i);
        getchar() ;
    }
    */
    
    /*
    // This loop prints the numbers from 15 to 21 inclusive.
    // After printing each number, it prints the string "test" on a new line.
    // When the loop ends, it prints the string "end" on a new line.
    for (int i = 15; i<22;i++){
        printf("%d\n", i);
        printf("\ntest");
    }
    printf("\nend");
    */
    
    // This loop prints the numbers from 15 to 22 inclusive.
    // Each number is printed on a new line.
    // After the loop ends, it prints the string "end" on a new line.
    for (int i = 15; i<=22;i++){
        printf("\n%d", i);
    }
    printf("\nend");

    // The program successfully ends.
    return 0;
}
