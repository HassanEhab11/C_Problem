/**
 * ----------------------------------------------------------------------------
 * Filename   : divideAndRemainder.c
 * Author     : Hassan Ehab
 * Created on : Wednesday, December 20, 2023
 * Last edited: Wednesday, December 20, 2023
 * Description: C function to take 2 variables and return division and remainder.
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>

void divideAndRemainder(int dividend, int divisor, int *quotient, int *remainder) {
    // Check if divisor is not zero to avoid division by zero
    if (divisor != 0) {
        *quotient = dividend / divisor;
        *remainder = dividend % divisor;
    } else {
        // If divisor is zero, set quotient and remainder to -1 (indicating division by zero)
        *quotient = -1;
        *remainder = -1;
    }
}

int main() {
    int dividend, divisor, quotient, remainder;

    // Example values
    dividend = 17;
    divisor = 5;

    // Call the function to get division and remainder
    divideAndRemainder(dividend, divisor, &quotient, &remainder);

    // Print the results
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
