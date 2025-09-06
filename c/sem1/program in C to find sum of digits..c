/* NAME: SOUMYA KUSHWAH              BRANCH:  VOC IT
APPLICATION:105291                   ROLLNO:2305823
*/
#include <stdio.h>
int main() {
    int number, sum = 0, digit;
    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0) {

        digit = number % 10;
        // Add the digit to the sum
        sum += digit;
        number /= 10;
    }
    // Output: Print the sum of digits
    printf("Sum of digits: %d\n", sum);
    return 0;
}

