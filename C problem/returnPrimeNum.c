/**
 * ----------------------------------------------------------------------------
 * Filename   : returnPrimeNum.c
 * Author     : Hassan Ehab
 * Created on : Wednesday, December 20, 2023
 * Last edited: Wednesday, December 20, 2023
 * Description: C function to take an array and its size and return the member that is a prime number.
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not a prime number
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}

// Function to print prime numbers in an array
void returnPrimeNum(int arr[], int size) {
    int foundPrime = 0;  // Flag to check if any prime number is found

    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            printf("%d\t", arr[i]);
            foundPrime = 1;  // Set the flag to indicate a prime number is found
        }
    }

    if (!foundPrime) {
        printf("No prime numbers found in the array.\n");
    } else {
        printf("\n");  // Line break after printing prime numbers
    }
}

int main() {
    int array[] = {4, 6, 7, 10, 12, 15, 11, 13, 17, 19, 23, 29, 31};
    int size = sizeof(array) / sizeof(array[0]);

    // Call the function to print prime numbers
    returnPrimeNum(array, size);

    return 0;
}
