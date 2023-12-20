/**
 * ----------------------------------------------------------------------------
 * Filename   : circularShift.c
 * Author     : Hassan Ehab
 * Created on : Tuesday, December 19, 2023
 * Last edited: Tuesday, December 19, 2023
 * Description: C function to return the circular shift of bits of a specific number.
 * ----------------------------------------------------------------------------
 */
#include<stdio.h>
unsigned int circularShift(unsigned int num, int shift){

    const int numBits = sizeof(unsigned int) * 8;

    // Make sure the shift value is within the range of 0 to numBits - 1
    shift = shift%numBits;

    return (num << shift) | (num >> (numBits - shift));

}

int main() {
    unsigned int num = 0x0A;  // Example number (10 in decimal or 1010 in binary)

    // Perform a circular shift to the left by 2 bits
    unsigned int result = circularShift(num, 2);

    printf("Original number: 0x%08X\n", num);
    printf("Circular shifted by 2 bits to the left: 0x%08X\n", result);

    return 0;
}
