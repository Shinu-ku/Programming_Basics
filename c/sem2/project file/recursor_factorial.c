#include <stdio.h>

int fact(int n) {
    if (n >= 1) {
        return n * fact(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int i, s;

    // Input the number
    printf("Enter the number: ");
    scanf("%d", &i);

    s = fact(i);

    // Display the result
    printf("Factorial of %d: %d\n", i, s);

    return 0;
}

