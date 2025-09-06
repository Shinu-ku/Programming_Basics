#include <stdio.h>

void count(int n) {
    if (n >= 1) {
        printf("%d\n", n);
        count(n - 1);  
    }
}

int main() {
    printf("Counting from 10 to 1:\n");
    count(10);

    return 0;
}

