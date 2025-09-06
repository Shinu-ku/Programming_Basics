#include <stdio.h>

int main() 
{
    int rows, cols, i, j;
    printf("ENTER THE NO. OF rows:");
    scanf("%d", &rows);
    printf("ENTER THE NO. OF columns:");
    scanf("%d", &cols);


    int matrix1[rows][cols];
    int result[rows][cols];


    // Input matrix
    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Matrix transpose
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = matrix1[j][i];
        }
    }



    // Display the matrices
    printf("\nMatrix 1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

// display result
    printf("\ntranspose of matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

