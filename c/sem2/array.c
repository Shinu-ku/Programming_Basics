#include <stdio.h>

int main() {
    int i, n;

    // Size of data
    printf("ENTER THE NO. OF STUDENTS:");
    scanf("%d", &n);

    char st[n][50];
    int roll[n];

    // Clear the input buffer
    while ((getchar()) != '\n');

    // Naming of data
    for (i = 0; i < n; i++) {
        printf("\nNAME OF STUDENT %d:", i + 1);

        // Read the name with spaces
        int c;
        int count = 0;
        while ((c = getchar()) != '\n' && count < 49) {
            st[i][count++] = c;
        }
        st[i][count] = '\0';  // Null-terminate the string
    }

    // Clear the input buffer before reading roll numbers
    while ((getchar()) != '\n');

    // Input rollno
    for (i = 0; i < n; i++) {
        printf("\nROLL NO OF STUDENT %d:", i + 1);
        scanf("%d", &roll[i]);
    }

    // Printing data
    printf("\n\nSTUDENT DETAILS:\n");
    for (i = 0; i < n; i++) {
        printf("STUDENT NAME: %s, ROLL NO: %d\n", st[i], roll[i]);
    }

    return 0;
}

