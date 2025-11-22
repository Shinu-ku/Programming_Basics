#include <stdio.h>

int main ()
{
    printf("MultiDimentional Array Demonstration\n");
    int row , col;
    // Taking the size for array 
    printf("Enter the number of Rows: \n");
    scanf("%d",&row);
    printf("Enter the number of Columns: \n");
    scanf("%d",&col);
    
    //2D array initialization
    
    int arr[row][col];
    printf("\nEnter the values for 2D array\n");
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Enter the value for Row: %d and Column: %d\n", (i+1), (j+1));
            scanf ("%d", &arr[i][j]);
        }
    }
    printf("\nPrinting of 2D array\n");
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf(" | %d | ",arr[i][j]);
        }
    printf("\n");
    }

    return 0;
}