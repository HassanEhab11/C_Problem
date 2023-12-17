/*
 * ----------------------------------------------------------------------------
 * Filename   : selectionSort.c
 * Author     : Hassan Ehab
 * Created on : sunday, December 17, 2023
 * Last edited: sunday, December 17, 2023
 * Description: Selection Sort Algorithm .
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>

void swap(int *num1, int *num2)
{
    *num1 = *num1^*num2;
    *num2 = *num1^*num2;
    *num1 = *num1^*num2;
}

void selectionSort(int *arr, int arr_size)
{

    int minIndex = 0;

    for(int i=0; i<arr_size-1; i++)
    {
        minIndex = i;

        for(int j=i+1; j <arr_size; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }

        }
        if(minIndex != i)
        {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

void printArr(int *arr, int arr_size)
{

    for(int i = 0; i<arr_size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {6,10,8,5,1,7,4,9,100};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    printArr(arr, size);

    return 0;
}
