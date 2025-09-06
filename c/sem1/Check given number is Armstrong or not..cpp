/* NAME: SOUMYA KUSHWAH              BRANCH:  VOC IT
APPLICATION:105291                   ROLLNO:2305823
*/
#include <stdio.h>
int main() {
    int n, number, remainder, result = 0, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    number = n;
    while (number != 0) {
        number /= 10;
        ++count;
    }
    number = n;
    int i;
    while (number != 0) {
        remainder = number % 10;


        int power = 1;
        for (i = 0; i < count; ++i) {
            power *= remainder;
        }
        result += power;
        number /= 10;
    }
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}

