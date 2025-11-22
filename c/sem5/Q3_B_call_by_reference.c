#include <stdio.h>

int mul(int* a, int* b);
int mul(int* a, int* b){
    int p,q;
    p =  *a;
    q =  *b;
    printf("%d * %d = %d ", p,q,(p*q));
}

int main ()
{
    printf("Function Dmonstration - Call By reference\n");

    int x , y ;
    printf("Enter the first value: ");
    scanf("%d", &x);

    printf("Enter the second value: ");
    scanf("%d", &y);
    // function calling by reference
    mul(&x,&y);

    return 0;
}