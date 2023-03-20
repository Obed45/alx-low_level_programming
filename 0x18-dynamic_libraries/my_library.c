#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: divide by zero\n");
        return 0;
    }
    return a / b;
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: divide by zero\n");
        return 0;
    }
    return a % b;
}
