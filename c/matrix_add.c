#include <stdio.h>

int main (){
    printf("MATRIX ADDITION\n");
    int row , col ;

    printf("Enter The number of Rows: ");
    scanf("%d", &row);
    printf("Enter The number of Columns: ");
    scanf("%d", &col);

    int mat1 [row][col];
    int mat2 [row][col];
    int res [row][col];

    printf("Input for Matrix 1\n");
    
    // input for Matrix 1
    for (int i = 0; i < row ; i++){
        for (int j = 0; j < col ; j++){
            printf("Enter for Row %d and Col %d Value: ",(i+1),(j+1));
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("\n");
    printf("Input for Matrix 2\n");
    
    // input for Matrix 2
    for (int i = 0; i < row ; i++){
        for (int j = 0; j < col ; j++){
            printf("Enter for Row %d and Col %d Value: ",(i+1),(j+1));
            scanf("%d", &mat2[i][j]);
        }
    }

    // matrix addition 
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col ; j++){
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Matrix 1\n");
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col ; j++){
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2\n"); 
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col ; j++){
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

    printf("Result\n");
    // Result Matrix 
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col ; j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}