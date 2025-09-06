#include <stdio.h>

void count(int n) {
    if (n <= 10) {
        printf("%d\n", n);
        count(n + 1);  
    }
}

int main() {
    printf("Counting from 1 to 10:\n");
    count(1);

    return 0;
}

