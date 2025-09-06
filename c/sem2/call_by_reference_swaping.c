#include<stdio.h>

// Function declaration
void swap(int* x, int* y);

// Function definition
void swap(int* x, int* y) {
    int i = *x;
    *x = *y;
    *y = i;
}

int main() {
    int a, b;

    // Input values for a and b
    printf("ENTER THE VALUE OF A:");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF B:");
    scanf("%d", &b);

    // Call the function to swap values
    swap(&a, &b);

    // Display the swapped values
    printf("Swapped values: A = %d, B = %d\n", a, b);

    return 0;
}

