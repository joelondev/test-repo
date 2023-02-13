#include <stdio.h>

int main(void)
{
    double number;
    char letter;

    /* %lf - format specifier prints double , 
    * %c prints out characters,  %.3lf prints
    *  out the 3 decimal places
    */
    printf("Type in number and letter : ");
    scanf("%lf %c", &number , &letter);

    printf("Number: %.3lf", number ); //prints 3decimal places
    printf("\nLetter: %c", letter);
}