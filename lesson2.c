#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a; 
    a = 5; // declare and initialize an integer variable a with value 5
    int b;
    b = 10; // declare and initialize an integer variable b with value 10
    // or we could have done int a = 5, b = 10;

    printf("%d\n%d\n",a,b); // print the values of a and b each followed by a newline (\n)

    /////////////////////////////////////////////////////////////

    int c;
    scanf("%d",&c); // read an integer input from the user and store it in variable c
    printf("%d\n",c); // print the value of c followed by a newline

    ///////////////////////////////////////////////////////////////////////

    int d,e;
    scanf("%d",&d); // read an integer input from the user and store it in variable d
    scanf("%d",&e); // read another integer input from the user and store it in variable e
    printf("%d\n%d\n",d,e); // print the values of d and e each followed by a newline

    //getchar(); // this line is commented out, but if uncommented it would pause the program until a key is pressed
}
