/* NAME: SOUMYA KUSHWAH              BRANCH:  VOC IT
APPLICATION:105291                   ROLLNO:2305823
*/
#include <stdio.h>
int main()
{
int a,b;
printf("ENTER THE VALUE OF A:");
scanf("%d",&a);
printf("ENTER THE VALUE OF B:");
scanf("%d",&b);
printf("\n");
printf("BEFORE SWAPING\n");
printf("the value of a:%d\n",a);
printf("the value of b:%d\n",b);
printf("\n");
//swaping
printf("AFTER SWAPING\n");
a=a+b;
b=a-b;
a=a-b;
printf("the value of a:%d\n",a);
printf("the value of b:%d\n",b);
    return 0;
}

