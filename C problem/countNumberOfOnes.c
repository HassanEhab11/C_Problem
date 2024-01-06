/**
 * ----------------------------------------------------------------------------
 * Filename   : countNumberOfOnes.c
 * Author     : Hassan Ehab
 * Created on : Tuesday, December 19, 2023
 * Last edited: Tuesday, December 19, 2023
 * Description: C Code to Count Number of ones in the binary of an integer NB.
 * ----------------------------------------------------------------------------
 */
#include<stdio.h>

int countNumberOfOnes(int num){
    int numOfOnes = 0;

    while(num){

        if(num & 1){
            numOfOnes++;
        }
        num>>=1;
    }

    return numOfOnes;
}

/*
int countNumberOfOnes(int num) {
    int count = 0;

    while (num) {
        // Increment count if the rightmost bit is 1
        count += num & 1;

        // Right shift the number to check the next bit
        num >>= 1;
    }

    return count;
}
*/
int main() {
    int num;

    // Input integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check for a non-negative integer
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1; // Exit with an error code
    }

    // Count the number of ones in the binary representation
    int onesCount = countNumberOfOnes(num);

    // Display the result
    printf("Number of ones in the binary representation of %d: %d\n", num, onesCount);

    return 0; // Exit successfully
}
