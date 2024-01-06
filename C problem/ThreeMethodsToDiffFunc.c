/**
 * ----------------------------------------------------------------------------
 * Filename   : ThreeMethodsToDiffFunc.c
 * Author     : Hassan Ehab
 * Created on : Tuesday, December 19, 2023
 * Last edited: Tuesday, December 19, 2023
 * Description: Three methods to different Functions from one function.
 * ----------------------------------------------------------------------------
 */
 
/** 1. Using Conditional Statements: **/
#include <stdio.h>

void functionA() {
    printf("This is function A\n");
}

void functionB() {
    printf("This is function B\n");
}

void functionC() {
    printf("This is function C\n");
}

void callDifferentFunction(int choice) {
    if (choice == 1) {
        functionA();
    } else if (choice == 2) {
        functionB();
    } else if (choice == 3) {
        functionC();
    } else {
        printf("Invalid choice\n");
    }
}

int main() {
    int choice;
    printf("Enter choice (1, 2, or 3): ");
    scanf("%d", &choice);

    callDifferentFunction(choice);

    return 0;
}

/** 2. Using Function Pointers: **/
#include <stdio.h>

void functionA() {
    printf("This is function A\n");
}

void functionB() {
    printf("This is function B\n");
}

void functionC() {
    printf("This is function C\n");
}

void callDifferentFunction(void (*func)()) {
    func();
}

int main() {
    int choice;
    printf("Enter choice (1, 2, or 3): ");
    scanf("%d", &choice);

    void (*selectedFunction)();

    switch (choice) {
        case 1:
            selectedFunction = functionA;
            break;
        case 2:
            selectedFunction = functionB;
            break;
        case 3:
            selectedFunction = functionC;
            break;
        default:
            printf("Invalid choice\n");
            return 1; // Exit with an error code
    }

    callDifferentFunction(selectedFunction);

    return 0;
}

/** 3. Using a Switch Statement: **/
#include <stdio.h>

void functionA() {
    printf("This is function A\n");
}

void functionB() {
    printf("This is function B\n");
}

void functionC() {
    printf("This is function C\n");
}

void callDifferentFunction(int choice) {
    switch (choice) {
        case 1:
            functionA();
            break;
        case 2:
            functionB();
            break;
        case 3:
            functionC();
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}

int main() {
    int choice;
    printf("Enter choice (1, 2, or 3): ");
    scanf("%d", &choice);

    callDifferentFunction(choice);

    return 0;
}
