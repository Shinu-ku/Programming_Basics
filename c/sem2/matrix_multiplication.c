#include <stdio.h>

int main() {
    int rows, cols, i, j,k;
    printf("ENTER THE NO. OF ROWS:");
    scanf("%d",&rows);
    printf("ENTER THE NO. OF COLOMNS:");
    scanf("%d",&cols);
    
    int matrix1[rows][cols];
    int matrix2[cols][rows];
    int result[rows][cols];


    // Input first matrix
    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d",&matrix1[i][j]);
        }
    }


    // Input second matrix
    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            scanf("%d",&matrix2[i][j]);
        }
    }


// Matrix multiplication
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols; k++) {
                result[i][j] = matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    //                Display the matrices                 //
    printf("\nMatrix 1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nmultiplications of matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }


    return 0;
}

