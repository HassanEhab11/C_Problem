/**
 * ----------------------------------------------------------------------------
 * Filename   : reverseStringItrAndRec.c
 * Author     : Hassan Ehab
 * Created on : sunday, December 17, 2023
 * Last edited: sunday, December 17, 2023
 * Description: C function to reverse a string using both iteration and recursion. .
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

void swap(char *num1, char *num2) {
    char temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        swap(&str[i], &str[len - i - 1]);
    }
}

void reverseStringRecursive(char *str, int start, int end) {
     // Base case: if start is greater than or equal to end, stop recursion
    if (start >= end){
        return;
    }

    // Swap the characters at start and end indices
    swap(&str[start], &str[end]);

    // Recursive call with updated indices
    reverseStringRecursive(str, start+1 , end-1);

}

int main() {
    char str[] = "hassan";
    char str2[] = "ABCDEF";
    int len = strlen(str2);

    printf("Original String: %s\n", str);
    printf("Original String: %s\n", str2);

    printf("\nReversed String By Iteration\n");

    reverseString(str);

    printf("Reversed String: %s\n", str);

    printf("\nReversed String By Recursive\n");

    reverseStringRecursive(str2, 0, len -1);

    printf("Reversed String: %s\n", str2);

    return 0;
}

