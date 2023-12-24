/**
 * ----------------------------------------------------------------------------
 * Filename   : numOfOccurrences.c
 * Author     : Hassan Ehab
 * Created on : Sunday, December 24, 2023
 * Last edited: Sunday, December 24, 2023
 * Description: C function to count the number of occurrences of a certain number in array.
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>
int numOfOccurrences(int *arr, int arrSize, int target){

    int numOfOccurrences = 0;
    if(arrSize == 0){
        return 0;
    }

    for(int i=0; i<arrSize; i++){
        if(arr[i] == target){
            numOfOccurrences++;
        }
    }
    return numOfOccurrences;
}

int main() {

    int arr[] = {1,2,5,8,6,9,8,5,8,6,5,4,2,1,0,25};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int target = 0;
    printf("Enter the target : ");
    scanf("%d",&target);
    int numOfOccur = numOfOccurrences(arr,  arrSize,  target);
    printf("Number of Occurrence %d in array is : %d \n",target,numOfOccur);
    return 0;
}
