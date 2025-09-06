#include <stdio.h>

// Function declaration
int calculateSquare();
// Function definition
int calculateSquare() {
    int number = 5;  
    int square = number * number;
    return square;
}

int main() {
    int result = calculateSquare();
    printf("The square is: %d\n", result);

    return 0;
}



