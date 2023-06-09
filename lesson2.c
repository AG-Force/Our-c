#include<stdio.h> //library
#include<stdlib.h> // library
/*

    #include <stdio.h>:
    Diese Bibliothek stellt Funktionen bereit, die für die Standard-Ein- und -Ausgabe in C verwendet werden. Beispielsweise ermöglicht sie das Lesen von Eingaben von der Tastatur oder das Schreiben von Ausgaben auf den Bildschirm. 
    Sie enthält Funktionen wie printf, scanf, fopen, fclose und viele weitere.

    #include <stdlib.h>:
    Diese Bibliothek enthält allgemeine Funktionen und Definitionen, die mit Speicherverwaltung, Zufallszahlen, Konvertierung von Zeichenketten in numerische Werte und anderen grundlegenden Funktionen zusammenhängen.
     Beispielsweise enthält sie Funktionen wie malloc, free, rand, atoi und andere, die für die dynamische Speicherzuweisung, Zufallszahlengenerierung und Zeichenkettenkonvertierung verwendet werden können.






*/
int main()
{
    int a; 
    a = 5; // declare and initialize an integer variable a with value 5
    int b;
    b = 10; // declare and initialize an integer variable b with value 10
    // or we could have done int a = 5, b = 10;

    printf("%d\n%d\n",a,b); // print the values of a and b each followed by a newline (\n)

    /////////////////////////////////////////////////////////////
     int a2; 
    a2 = 5; // declare and initialize an integer variable a with value 5
    int b2;
    b2 = 10; // declare and initialize an integer variable b with value 10
    // or we could have done int a = 5, b = 10;

    printf("%d%d",a2,b2); // print the values of a and b each followed by a newline (\n)
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
        /////////////////////////////////////////////////////////////
int z = 34, u = 23;
printf("%d%d",z,u);

return 0;
}
