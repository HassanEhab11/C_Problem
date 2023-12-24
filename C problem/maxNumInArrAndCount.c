/**
 * ----------------------------------------------------------------------------
 * Filename   : maxNumInArrAndCount.c
 * Author     : Hassan Ehab
 * Created on : Sunday, December 24, 2023
 * Last edited: Sunday, December 24, 2023
 * Description: C function to return the maximum number in array and
 *              the number of times this maximum number was found in the array.
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>

typedef struct result{
    int maxNum;
    int maxOccurance;
}result_t;

void maxNumInArrAndCount(int *arr, int arrSize, result_t *arrResult){

    if (arrSize <= 0) {
        // Handle the case where the array is empty
        arrResult->maxNum = 0;  // Set maxNum to a default value
        arrResult->maxOccurance = 0;  // No occurrences of maxNum
        return;
    }

    // Assume the first element is the maximum
    arrResult->maxNum = arr[0];
    // Initialize count to 1 for the first occurrence
    arrResult->maxOccurance = 1;

    for(int i =0; i<arrSize; i++){

        if(arr[i] > arrResult->maxNum){
            // Found a new maximum
            arrResult->maxNum = arr[i];
            // Reset count for the new maximum
            arrResult->maxOccurance = 1;
        } else if (arr[i] == arrResult->maxNum){
            // Found another occurrence of the current maximum
            arrResult->maxOccurance ++;
        }
        // If arr[i] < arrResult->maxNum, do nothing for this iteration
    }

}


int main() {
    int arr[]= {10,20,5,30,30,6,9,30,1,7};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    result_t arrResult = {0, 0};  // Initialize the structure
    maxNumInArrAndCount(arr, arrSize, &arrResult);
    printf("Max number is : %d\n",arrResult.maxNum);
    printf("Max Occurrence is : %d\n",arrResult.maxOccurance);

    return 0;
}
