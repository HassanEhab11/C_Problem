/**
 * ----------------------------------------------------------------------------
 * Filename   : swapArraysReversed.c
 * Author     : Hassan Ehab
 * Created on : Wednesday, December 20, 2023
 * Last edited: Wednesday, December 20, 2023
 * Description: If you have two arrays x and y, each array have 5 elements,
 *              write a function that swap both arrays in a reversed pattern (x[0] with y[5]).
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>

void swapArraysReversed(int x[], int y[], int size) {
    // Ensure the size is the same for both arrays
    if (size <= 0) {
        printf("Invalid array size.\n");
        return;
    }

    // Swap elements in a reversed pattern
    for (int i = 0; i < size; ++i) {
        int temp = x[i];
        x[i] = y[size - 1 - i];
        y[size - 1 - i] = temp;
    }
}

void printArray(const char *label, int arr[], int size) {
    printf("%s: ", label);
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int x[] = {1, 2, 3, 4, 5};
    int y[] = {6, 7, 8, 9, 10};
    int size = 5;

    printf("Before swapping:\n");
    printArray("x", x, size);
    printArray("y", y, size);

    swapArraysReversed(x, y, size);

    printf("\nAfter swapping:\n");
    printArray("x", x, size);
    printArray("y", y, size);

    return 0;
}
