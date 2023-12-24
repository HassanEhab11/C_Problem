/**
 * ----------------------------------------------------------------------------
 * Filename   : calculateFactorial.c
 * Author     : Hassan Ehab
 * Created on : Sunday, December 24, 2023
 * Last edited: Sunday, December 24, 2023
 * Description: C function to calculate the factorial using the recursive and iterative methods.
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>
unsigned long recursiveFactorial(int num){

    if(num == 0 || num == 1){
        return 1;
    } else {
        return num * recursiveFactorial(num - 1);

    }
}
unsigned long iterativeFactorial(int num){
    unsigned long long fac = 1;
    if(num < 0){
        return 0;
    }

    while(num){
        fac *= num--;
    }
    return fac;
}
int main() {
    int num;

    // Input from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using recursive method
        printf("Factorial using recursive method: %lu\n", recursiveFactorial(num));

        // Calculate factorial using iterative method
        printf("Factorial using iterative method: %lu\n", iterativeFactorial(num));
    }

    return 0;
}
