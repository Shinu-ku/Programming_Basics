#include <stdio.h>

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n){
    int i, j, count = 0;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                count = count+1;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
    printf("number of swaps: %d\n", count);
}

void reversebubbleSort(int arr[], int n){
    int i, j, count = 0;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                count = count+1;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
    printf("number of swaps: %d\n", count);
}


int main(){

    int arr[] = { 62, 35, 26, 17, 8, 44, 91 ,53 };

    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\n__________________________________________________________________\n");

    printf("Original array: \n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n_________________________Bubble Sort Demo_________________________\n");

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n__________________________________________________________________\n");
    
    printf("\n_____________________Reverse Bubble Sort Demo_____________________\n");

    reversebubbleSort(arr, n);

    printf("Reversed Sorted array: \n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n__________________________________________________________________\n");

    return 0;
}
