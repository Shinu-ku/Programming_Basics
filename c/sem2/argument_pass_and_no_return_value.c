#include <stdio.h>

// Function declaration
void printMessage(char message[]);

// Function definition
void printMessage(char message[]) {
    printf("%s\n", message);
}

int main() {
    printMessage("Hello, World!");
    return 0;
}


