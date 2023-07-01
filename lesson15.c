#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int number = -1; 
    while(number < 0) {
        printf("Enter a positive integer: ");
        scanf("%d", &number);
    }
    */
    //########################################################################//
/*

  int number2;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &number2);
    } while (number2<0);
    if(number2 == 0){
      printf("%d!= %d", number2,1);
    }else{
    int i = 1, f = 1;
        while (i<=number2)
        {
         f = f * i;
         i++;
 
        }
        printf("%d!= %d", number2, f);
    }

*/
  
//########################################################################//
/*



int number2;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &number2);
    } while (number2<0);
    if(number2 == 0){
      printf("%d!= %d", number2,1);
    }else{
    int i = number2, f = 1;
        while (i>1)
        {
         f = f * i;
         i--;
 
        }
        printf("%d!= %d", number2, f);
    }

*/
//########################################################################//
  int number2;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &number2);
    } while (number2<0);
    if(number2 == 0){
      printf("%d!= %d", number2,1);
    }else{
        int f = 1;
    for (int i = 1; i <= number2; i++){
         f = f * i;

    }
            printf("%d!= %d", number2, f);

    }
//########################################################################//


    return 0;
}
