/**
 * ----------------------------------------------------------------------------
 * Filename   : swap4Bits.c
 * Author     : Hassan Ehab
 * Created on : sunday, December 17, 2023
 * Last edited: sunday, December 17, 2023
 * Description: C function to SWAP the two 4-bits of 8-bits numbers.
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

void swap(char *num1) {
    char temp = *num1>>4 &0x0f;
    *num1 = *num1<<4;
    *num1 = *num1 |temp;
}


int main() {
    unsigned char x = 0b11110000;
    printf("%d\n",x);
    swap(&x);
    printf("%d\n",x);

    return 0;
}

