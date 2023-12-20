/**
 * ----------------------------------------------------------------------------
 * Filename   : reverseArray.c
 * Author     : Hassan Ehab
 * Created on : Wednesday, December 20, 2023
 * Last edited: Wednesday, December 20, 2023
 * Description: C function to reverse an array.
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>

void reverseArray(int *arr, int arrSize){

    int temp;
    for(int i=0; i<arrSize/2; i++){

        temp = arr[i];
        arr[i] = arr[arrSize - i -1];
        arr[arrSize - i -1] = temp;
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

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    printArray("Reversed", arr, size);
    return 0;
}
