#include <stdio.h>
#include <string.h>

void fibonacci(int n) {
    int a = 0, b = 1, c, i;
    char con[3] = "yes";
    char ans[3];
    
    printf("Do you want to input the initial terms as '0 and 1' of the Fibonacci series?\n");
    printf("(yes/no): ");
    scanf("%s", ans);

    if (strcmp(con, ans) != 0) {
        printf("Enter the first term: ");
        scanf("%d", &a);
        printf("Enter the second term: ");
        scanf("%d", &b);
    }

    printf("Fibonacci series up to %d terms:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int terms;

    // Input the number of terms
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}

