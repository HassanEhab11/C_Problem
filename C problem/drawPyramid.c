/**
 * ----------------------------------------------------------------------------
 * Filename   : drawPyramid.c
 * Author     : Hassan Ehab
 * Created on : Wednesday, December 20, 2023
 * Last edited: Wednesday, December 20, 2023
 * Description: C function to draw a pyramid.
 * ----------------------------------------------------------------------------
 */
#include <stdio.h>

//// Function to draw a pyramid of a given height
//void drawPyramid(int height) {
//    for (int i = 1; i <= height; i++) {
//        // Print spaces before the stars
//        for (int j = 0; j < height - i; j++) {
//            printf(" ");
//        }
//
//        // Print stars
//        for (int k = 0; k < 2 * i - 1; k++) {
//            printf("*");
//        }
//
//        // Move to the next line after printing each row
//        printf("\n");
//    }
//}

// Function to draw a pyramid of a given height
void drawPyramid(int height) {
    for(int i=1; i<=height; i++){

        //print space
        for(int j = 1;j<=height-i;j++){
            printf(" ");
        }
        // print star
        for(int k =1; k<= 2*i - 1; k++){
            printf("*");
        }
        // print new line
        printf("\n");
    }

}
int main() {
    int pyramidHeight;

    // Input the height of the pyramid
    printf("Enter the height of the pyramid: ");
    scanf("%d", &pyramidHeight);

    // Check if the input is valid (positive integer)
    if (pyramidHeight > 0) {
        // Call the function to draw the pyramid
        drawPyramid(pyramidHeight);
    } else {
        printf("Invalid input. Please enter a positive integer.\n");
    }

    return 0;
}
