/* NAME: SOUMYA KUSHWAH         BRANCH:  VOC IT       
 APPLICATION:105291            ROLLNO:2305823
*/
#include <stdio.h>
int main() {
    int n1, n2, n3;
    // Input three integers
    printf("Enter the integer1: ");
    scanf("%d",&n1); 
    printf("Enter the integer2: ");
    scanf("%d",&n2);
    printf("Enter the integer3: ");
    scanf("%d",&n3);
    // Check the greatest number
    if (n1 >= n2 && n1 >= n3) {
        printf("%d is the greatest.\n", n1);
    } else if (n2 >= n1 && n2 >= n3) {
        printf("%d is the greatest.\n", n2);
    } else {
        printf("%d is the greatest.\n", n3);
    }
    return 0;
}

