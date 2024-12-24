// calculator.c
#include "calculator.h"

// Adds two integers
int add(int a, int b) {
    return a + b;
}

// Subtracts the second integer from the first
int subtract(int a, int b) {
    return a - b;
}

// Multiplies two integers
int multiply(int a, int b) {
    return a * b;
}

// Divides the first integer by the second
// Returns 0 if division by zero is attempted
int divide(int a, int b) {
    if (b == 0) {
        return 0; // Handling division by zero
    }
    return a / b;
}
