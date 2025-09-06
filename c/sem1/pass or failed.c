/* NAME: SOUMYA KUSHWAH          BRANCH:  VOC IT
APPLICATION:105291               ROLLNO:2305823
*/
#include <stdio.h>
int main()
{
// TO CHECK THE MARKS ARE ENOUGH TO PASS OR NOT AND GIVE THE GRADES
int marks;
printf("ENTER YOUR MARKS:");
scanf("%d",&marks);

if(0<=marks&&marks<=100)
	if(marks>=90)
	{printf("GRADE 'EXCELLENT'");
	}
	else if(89>=marks&&marks>=81)
	{printf("GRADE 'A'");
	}
	else if(80>=marks&&marks>=71)
	{printf("GRADE 'B'");
	}
	else if(70>=marks&&marks>=61)
	{printf("GRADE 'C'");
	}
	else if(60>=marks&&marks>=51)
	{printf("GRADE 'D'");
	}
	else if(50>=marks&&marks>=38)
	{printf("GRADE 'E'");
	}
	else if(37>=marks)
	{printf("FAILED");
	}
else{printf("INVALID MARKS");
}

return 0;	
}
