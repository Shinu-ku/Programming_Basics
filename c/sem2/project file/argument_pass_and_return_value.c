#include<stdio.h>

// Function declaration
int addNumbers(int a, int b);

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int sum = addNumbers(5, 7);
    printf("Sum: %d\n", sum);
    return 0;
}

