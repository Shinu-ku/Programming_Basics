#include <stdio.h>
int main(){
    int i, n;
    // No. of data
    printf("ENTER THE NO. OF STUDENTS:");
    scanf("%d", &n);
    char std[n][50];  
    int roll[n];
    int marks[n];
    
    // Input Name
    for (i = 0; i < n; i++){
        printf("\nNAME OF STUDENT %d:", i + 1);
        scanf(" %[^\n]", std[i]);
    }

    // Input rollno
    for (i = 0; i < n; i++){
	
        printf("\nROLL NO OF STUDENT %d:", i + 1);
        scanf("%d", &roll[i]);
    }

    // Input marks
    for (i = 0; i < n; i++){
        printf("\nMarks OF STUDENT %d:", i + 1);
        scanf("%d", &marks[i]);
    }

    // Printing data
    printf("\n\nSTUDENT DETAILS:\n");
    for (i = 0; i < n; i++) {
        printf("STUDENT NAME: %-20s ROLL NO: %d  Marks: %d\n", std[i], roll[i], marks[i]);
    }
    
    return 0;
}
