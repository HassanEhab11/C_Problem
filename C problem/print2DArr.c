/**
 * ----------------------------------------------------------------------------
 * Filename   : print2DArr.c
 * Author     : Hassan Ehab
 * Created on : Sunday, December 24, 2023
 * Last edited: Sunday, December 24, 2023
 * Description: C function to print 2D array.
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>
// pointer to an array
//void print2DArr(int (*arr)[6], int rows, int cols){
//
//    for(int i = 0;i<rows; i++){
//            printf("{\t");
//            for(int j=0; j<cols; j++){
//                printf("%d\t",arr[i][j]);
//            }
//        printf("}\n");
//    }
//}
//  single pointer
//void print2DArr(int *arr, int rows, int cols)
//{
//    int i, j;
//    for (i = 0; i < rows; i++){
//            printf("{\t");
//      for (j = 0; j < cols; j++)
//        printf("%d\t", *((arr+i*cols) + j));
//        printf("}\n");
//    }
//}

void print2DArr(int rows, int cols, int arr[][cols])
{
    int i, j;
    for (i = 0; i < rows; i++)
      for (j = 0; j < cols; j++)
        printf("%d ", arr[i][j]);
}

int main() {

    int array[][6] = {{1,2,3,4,5,6},{11,22,33,44,55,66}};
    int rows = sizeof(array) / sizeof(array[0]);
    int cols = sizeof(array[0]) / sizeof(array[0][0]);
    print2DArr( rows, cols, array);
    return 0;
}
