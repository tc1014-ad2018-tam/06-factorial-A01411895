//Luis Ignacio Acosta Zamora A01411895

/*Write a program that computes the factorial of any given number.

The number should be a positive integer or zero.
User the while statement to compute the factorial.
Remember that:

The factorial of 0 is 1.
The factorial of 1 is 1.
The factorial of any other positive integer N is that integer multiplied by all the positive integers less than N.
For example: 5! = 5 x 4 x 3 x 2 x 1 = 120.*/

#include <stdio.h>

int main() {

    //Create new variables
    int number;
    int factorial;
    int integer;

    //Ask the user for a number
    printf("Please enter a positive integer or zero to give you the factorial: ");
    //Save the number
    scanf("%d", &factorial);

    //Give a specific answer outside the main code if the number the user gave is 0 or 1
    if( factorial == 0|| factorial == 1){
        printf("The factorial of %i", factorial);
        printf(" is 1\n");
    }

    else{
        integer = factorial - 1;
        number = factorial;

        //While loop that gives the factorial
        while(integer > 0 ){
            number = number * integer;
            integer --;
        }

        //Print the factorial of the integer the user gave
        printf("The factorial of %i", factorial);
        printf(" is: %i\n", number);
    }
    return 0;
}