#include <stdio.h>

int sum(int n) {
    if (n >= 1) {
        return n + sum(n - 1);
    } else {
        return 0;
    }
}

int main() {
    int i, s;

    // Input the number
    printf("Enter the number: ");
    scanf("%d", &i);

    s = sum(i);

    // Display the result
    printf("Sum of natural numbers up to %d: %d\n", i, s);

    return 0;
}

