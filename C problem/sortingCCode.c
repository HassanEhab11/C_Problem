/**
 * ----------------------------------------------------------------------------
 * Filename   : sortingCCode.c
 * Author     : Hassan Ehab
 * Created on : Saturday, January 6, 2024
 * Last edited: Saturday, January 6, 2024
 * Description: Sorting C Code.
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>
#include <string.h> // Add this line for memcpy


void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*** Bubble Sort ***/
void bubbleSort(int arr[], int arrSize)
{
    int flag = 1;
    for(int i =0; i<arrSize-1; i++)
    {
        flag = 1;
        for(int j = 0; j<arrSize -i -1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                flag = 0;
                swap(&arr[j],&arr[j+1]);
            }
        }
        if(flag)
        {
            return;
        }
    }
}
/*** Selection Sort ***/
void selectionSort(int arr[], int arrSize)
{
    int minIndex = 0;

    for(int i =0; i<arrSize-1; i++)
    {
        minIndex = i;
        for(int j = i+1; j < arrSize; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(&arr[i],&arr[minIndex]);
    }

}

/*** Insertion Sort ***/
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1] that are greater than key
           to one position ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

/*** Quick Sort ***/
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

/***************************************************************/
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: ");
    printArray(arr, arrSize);

    // Test Bubble Sort
    int arrBubbleSort[arrSize];
    memcpy(arrBubbleSort, arr, sizeof(arr)); // Copy the original array
    bubbleSort(arrBubbleSort, arrSize);
    printf("Sorted array using Bubble Sort:      ");
    printArray(arrBubbleSort, arrSize);

    // Test Selection Sort
    int arrSelectionSort[arrSize];
    memcpy(arrSelectionSort, arr, sizeof(arr)); // Copy the original array
    selectionSort(arrSelectionSort, arrSize);
    printf("Sorted array using Selection Sort:   ");
    printArray(arrSelectionSort, arrSize);

    // Test Insertion Sort
    int arrInsertionSort[arrSize];
    memcpy(arrInsertionSort, arr, sizeof(arr)); // Copy the original array
    insertionSort(arrInsertionSort, arrSize);
    printf("Sorted array using Insertion Sort:   ");
    printArray(arrInsertionSort, arrSize);

    // Test Quick Sort
    int arrQuickSort[arrSize];
    memcpy(arrQuickSort, arr, sizeof(arr)); // Copy the original array
    quicksort(arrQuickSort, 0, arrSize - 1);
    printf("Sorted array using Quick Sort:       ");
    printArray(arrQuickSort, arrSize);

    return 0;
}
