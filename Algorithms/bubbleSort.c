#include <stdio.h>

void swap(int *num1, int *num2)
{
    *num1 = *num1^*num2;
    *num2 = *num1^*num2;
    *num1 = *num1^*num2;
}

void bubbleSort(int *arr, int arr_size){

    int flag = 0;

    for(int i=0; i<arr_size-1; i++){

        flag = 1;
        for(int j=0; j <arr_size -i -1; j++){

            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                flag = 0;
            }
        }
        if(flag)
            break;
    }
}

void printArr(int *arr, int arr_size){

    for(int i = 0; i<arr_size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] ={6,10,8,5,1,7,4,9,100};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    printArr(arr, size);

    return 0;
}
