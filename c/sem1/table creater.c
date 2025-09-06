/* NAME: SOUMYA KUSHWAH              BRANCH:  VOC IT
APPLICATION:105291                   ROLLNO:2305823
*/
#include <stdio.h>
int main()
{
int a,b;

printf("ENTER THE VALUE OF TABLE:");
scanf("%d",&b);
printf("\n");
// table creater 
printf("THE TABLE OF:%d\n",b);

 for (a = 1; a <= 10; a++) {
        printf("%d*%d=%d\n",b,a,b*a);
    }

    return 0;
}

