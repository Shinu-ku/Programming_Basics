/* NAME: SOUMYA KUSHWAH              BRANCH:  VOC IT
APPLICATION:105291                   ROLLNO:2305823
*/
#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;
    // Input: Get the positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    // Check if the entered number is negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        // Output: Display the factorial
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    return 0;
}

