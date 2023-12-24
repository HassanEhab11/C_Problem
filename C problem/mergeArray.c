/**
 * ----------------------------------------------------------------------------
 * Filename   : mergeArray.c
 * Author     : Hassan Ehab
 * Created on : Wednesday, December 20, 2023
 * Last edited: Wednesday, December 20, 2023
 * Description: C function to merge 2 arrays using only one for loop.
 * ----------------------------------------------------------------------------
 */
#include<stdio.h>

// Function to merge two arrays into a third array using a single loop
void mergeArray(int *arr1, int *arr2, int arr1_size, int arr2_size, int mergedArr[], int mergedSize) {
    for (int i = 0; i < arr1_size + arr2_size; i++) {
        if (i < arr1_size) {
            mergedArr[i] = arr1[i];
        } else {
            // Adjust the index to copy elements from arr2
            mergedArr[i] = arr2[i - arr1_size];
        }
    }
}

// Function to print an array
void printArr(int *arr, int arrsize) {
    for (int i = 0; i < arrsize; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {
    // Define two arrays
    int arr1[3] = {1, 2, 3};
    int arr2[6] = {4, 5, 6, 7, 8, 9};

    // Calculate the sizes of the arrays
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Calculate the size of the merged array
    int mergedSize = size1 + size2;

    // Declare an array to store the merged result
    int mergedArr[mergedSize];

    // Merge the arrays
    mergeArray(arr1, arr2, 3, 6, mergedArr, mergedSize);

    // Print the merged array
    printf("Merged Array:\t");
    printArr(mergedArr, 9);

    return 0;
}
