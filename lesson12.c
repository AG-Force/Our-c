#include<stdio.h>
#include<stdlib.h>

int main()
{
    // First while loop: prints the numbers from 1 to 10 inclusive, then "end".
    int j = 1;
    while (j<11){
        printf("%d\n", j);
        j ++;
    }
    printf("end\n");

    //////////////////////////////////////////////////////

    // Second while loop: increments 'j2' before printing, so it prints the numbers from 2 to 11 inclusive, then "end".
    int j2 = 1;
    while (j2<11){
        j2 ++;
        printf("%d\n", j2);
    }
    printf("end\n");

    //////////////////////////////////////////////////////

    // Third while loop: similar to the second one, but 'j3' starts from 0, so it prints the numbers from 1 to 10 inclusive.
    int j3 = 0;
    while (j3<10){
        j3 ++;
        printf("%d\n", j3);
    }

    //////////////////////////////////////////////////////

    // Fourth while loop: asks the user to enter a number less than 11, and repeats this until the entered number is 11 or more.
    // Note that this loop could become infinite if the user keeps entering numbers less than 11.
    int j4 = 1;
    while (j4<11){
        printf("enter a number  < 11 please");
        scanf("%d", &j4);
        printf("%d\n", j4);
    }

    return 0;
}
