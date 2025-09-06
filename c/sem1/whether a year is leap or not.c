/* NAME: SOUMYA KUSHWAH              BRANCH:  VOC IT
APPLICATION:105291                   ROLLNO:2305823
*/
#include <stdio.h>

int main() {
    int year;
    // Input the year
    printf("Enter a year:");
    scanf("%d", &year);
    // Check if it is a leap year or not
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
	//the year number must be divisible by four except for end-of-century years, which must be divisible by 400.  
	{
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}

