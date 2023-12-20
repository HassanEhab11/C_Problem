/**
 * ----------------------------------------------------------------------------
 * Filename   : BitMath.c
 * Author     : Hassan Ehab
 * Created on : Tuesday, December 19, 2023
 * Last edited: Tuesday, December 19, 2023
 * Description: C function to clear a specific bit in an integer and another one to set a bit.
 * ----------------------------------------------------------------------------
 */

#include<stdio.h>

/*********** Function Prototype ***********/
void clearBit(int *num, int bit);
void setBit(int *num, int bit);
void toggleBit(int *num, int bit);
int getBit(int num, int bit);

int main() {

    int num = 15;

    // Example usage:
    setBit(&num, 4); // Set bit 2
    printf("After setting bit 2: %d\n", num);

    clearBit(&num, 3); // Clear bit 3
    printf("After clearing bit 3: %d\n", num);

    toggleBit(&num, 1); // Toggle bit 1
    printf("After toggling bit 1: %d\n", num);

    int bitValue = getBit(num, 2); // Get value of bit 2
    printf("Value of bit 2: %d\n", bitValue);

    return 0;

    return 0;
}

/************ Function Impelentation ***********/
void clearBit(int *num, int bit) {
    *num &= ~(1 << bit);
}

void setBit(int *num, int bit) {
    *num |= (1 << bit);
}

void toggleBit(int *num, int bit) {
    *num ^= (1 << bit);
}

int getBit(int num, int bit) {
    return (num >> bit) & 1;
}
