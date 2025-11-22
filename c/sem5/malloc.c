#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter The Size: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(sizeof(int) * n);
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Enter the value: ");
        scanf("%d", &ptr[i]);
    }
    
    printf("The values entered are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);  
    }

    free(ptr);      

    return 0;
}
