#include <stdio.h>

// Function declaration
int calculateFactorial();

// Function definition
int calculateFactorial() {
    int n = 5;
	int i;  

    // Calculate factorial
    int factorial = 1;
    for (i = 1; i <= n; i++) 
	{
        factorial *= i;
    }

    return factorial;
}

int main() {
    // Function call
    int result = calculateFactorial();

    // Display the result
    printf("Factorial: %d\n", result);

    return 0;
}

