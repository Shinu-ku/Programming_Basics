// we can'n add two addresses
#include <stdio.h>

int main (){
    int a = 12;
    int b = 54;    
    int *c = &a;
    int *d = &b;

    printf("value of a: %d\n", a);
    printf("value of b: %d\n", b);

    printf("address of a: %d and the value at pointer c: %d\n",&a,c);
    printf("address of b: %d and the value at pointer d: %d\n",&b,d);
    int sum , temp1 , temp2;
    temp1 = *c;
    temp2 = *d;
    sum = temp1 + temp2;
    // printf("The addition of address is not possible: %d \n", (c+d));
    printf("The addition of value at address is possible: %d \n",sum);

    return 0;
}