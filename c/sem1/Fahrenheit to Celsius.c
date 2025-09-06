/* NAME: SOUMYA KUSHWAH 
BRANCH:  VOC IT
APPLICATION:105291
ROLLNO:2305823
*/
#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;
    // Result
    printf("Temperature in Celsius: %.2f\n", celsius);
    return 0;
}

