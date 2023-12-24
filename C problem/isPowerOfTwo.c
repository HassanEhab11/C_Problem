/**
 * ----------------------------------------------------------------------------
 * Filename   : isPowerOfTwo.c
 * Author     : Hassan Ehab
 * Created on : Sunday, December 24, 2023
 * Last edited: Sunday, December 24, 2023
 * Description: C function to check if the number is a power of 2.
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>

int isPowerOfTwo(int number){

    // Check if the number is greater than 0 and has only one set bit
        return (number > 0)&& ((number & (number - 1)) == 0);
}
int main() {
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is a power of 2
    if (isPowerOfTwo(number)) {
        printf("%d is a power of 2.\n", number);
    } else {
        printf("%d is not a power of 2.\n", number);
    }

    return 0;
}
