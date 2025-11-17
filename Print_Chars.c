/*------------------------------------------------------
* Filename: Print_Chars.c
* Description: A program to print sqare of characters according to number
* Author: Benaya Yesha'ayahu Halevi
-------------------------------------------------------*/

#include<stdio.h>

int main(){
    unsigned int number = 0;
    char character = '\0';

    // Get the number from the user:
    printf("Enetr a number: ");
    scanf("%d", &number);

    // Check which character to use:
    if (number % 2 == 0){ character = '*'; }
    else if (number % 3 == 0) { character = '^'; }
    else if (number % 5 == 0) { character = '%'; }
    else { character = '@'; }

    // Print the square of the characters:
    for(int i = 0; i < number; ++i){
        for(int j = 0; j < number; ++j){
            printf("%c", character);
        }
        printf("\n");
    }

    return 0;
}