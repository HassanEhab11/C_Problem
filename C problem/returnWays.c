/**
 * ----------------------------------------------------------------------------
 * Filename   : ReturnWays.c
 * Author     : Hassan Ehab
 * Created on : Wednesday, December 20, 2023
 * Last edited: Wednesday, December 20, 2023
 * Description: C function that takes x and y, then returns their summation and multiplication by different ways (3ways).
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>

/** Way One Using Global Variable **/
int sumResult_1;
int multiResult_1;

void wayOne(int num1, int num2) {
    sumResult_1 = num1 + num2;
    multiResult_1 = num1 * num2;
}

/** Way Two Using Pointer **/
void wayTwo(int num1, int num2, int *sumResult_2, int *multiResult_2) {
    *sumResult_2 = num1 + num2;
    *multiResult_2 = num1 * num2;
}

/** Way Two Using struct **/
typedef struct result {
    int sumResult_3;
    int multiResult_3;
} result_t;

result_t wayThree(int num1, int num2) {
    result_t result;
    result.sumResult_3 = num1 + num2;
    result.multiResult_3 = num1 * num2;
    return result;
}

int main() {
    printf("\n/** Way One **/ \n");
    wayOne(5, 10);
    printf("Sum Using Way One = %d\n", sumResult_1);
    printf("Multiplication Using Way One = %d\n", multiResult_1);

    printf("\n/** Way Two **/ \n");
    int sumResult_2;
    int multiResult_2;
    wayTwo(20, 30, &sumResult_2, &multiResult_2);
    printf("Sum Using Way Two = %d\n", sumResult_2);
    printf("Multiplication Using Way Two = %d\n", multiResult_2);

    printf("\n/** Way Three **/ \n");
    result_t result_3;
    result_3 = wayThree(30, 30);
    printf("Sum Using Way Three = %d\n", result_3.sumResult_3);
    printf("Multiplication Using Way Three = %d\n", result_3.multiResult_3);

    return 0;
}

