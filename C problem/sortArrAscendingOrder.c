/**
 * ----------------------------------------------------------------------------
 * Filename   : sortArrAscendingOrder.c
 * Author     : Hassan Ehab
 * Created on : Sunday, December 24, 2023
 * Last edited: Sunday, December 24, 2023
 * Description: C function to sort an array in ascending order.
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
// Bubble Sort
void sortArrAscendingOrder(int *arr, int arrSize) {
    for (int i = 0; i < arrSize - 1; i++) {
        int flag = 1;
        for (int j = 0; j < arrSize - i -1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                flag = 0;
            }
        }
        if (flag) {
            // If no swaps occurred in this pass, the array is already sorted.
            break;
        }
    }
}

void printArr(int *arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 50, 40, 30, 20, 60, 70, 90, 80, 100};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    sortArrAscendingOrder(arr, arrSize);
    printArr(arr, arrSize);

    return 0;
}

