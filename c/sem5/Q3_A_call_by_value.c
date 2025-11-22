#include <stdio.h>

int mul(int a, int b);
int mul(int a, int b){
    printf("%d * %d = %d ", a,b,(a*b));
}

int main ()
{
    printf("Function Dmonstration - Call By Value\n");

    int x , y ;
    printf("Enter the first value: ");
    scanf("%d", &x);

    printf("Enter the second value: ");
    scanf("%d", &y);
    // function calling by value
    mul(x,y);

    return 0;
}