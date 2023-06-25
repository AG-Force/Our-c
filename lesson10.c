#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    // This is the first method to find the maximum value among a, b, and c.
    // It checks if a is greater than b, if so, then it checks if a is also greater than c.
    // If both conditions are true, it prints a as the maximum value.
    // If a is not greater than c, it prints c as the maximum value.
    // If a is not greater than b, then it checks if b is greater than c.
    // If it is, it prints b as the maximum value.
    // If it's not, it prints c as the maximum value.
    int a = 7, b = 7, c = 10;
    if(a>b){
        if(a>c){
            printf("%d", a);
        }else{
            printf("%d",c);
        }
    }else{
        if(b>c){
            printf("%d",b);
        }else{
            printf("%d", c);
        }
    }
    */

    /*
    // This is the second method to find the maximum value among a, b, and c.
    // It uses && (and) operator to compare a, b, and c in pairs.
    // If a is greater than both b and c, it prints a.
    // If a is greater than b but less than c, it prints c.
    // If b is greater than both a and c, it prints b.
    // If none of the above conditions are true, it prints c.
    int a = 15, b = 7, c = 1;
    if(a>b && b>c ){
        printf("%d", a);
    }else if(a>b && a<c)
      printf("%d",c);
     else if(a<b && b>c){
        printf("%d", b);
     }else {
        printf("%d", c);
     }
    */

    // This is the third method to find the maximum value among a, b, and c.
    // It is exactly the same as the second method, but without the block structure
    // for each condition. It directly prints the maximum value on the same line.
    int a = 15, b = 7, c = 1;
    if(a>b && b>c )      printf("%d", a);
    else if(a>b && a<c)  printf("%d",c);
    else if(a<b && b>c)  printf("%d", b);
    else                 printf("%d", c);

    return 0;
}
