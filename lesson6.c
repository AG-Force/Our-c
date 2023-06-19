#include<stdio.h>



int main()


{
int  age, year, year_current;
printf("enter your birthyear2 please: ");
scanf("%d",&year);

printf("enter the current year: ");
scanf("%d", &year_current);
age = year_current - year;
printf("your age is : %d",age);



    return 0;
}