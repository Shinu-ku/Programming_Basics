// address can't run by multiply and divide operation 
// but they can add or sub 
#include <stdio.h>

int main (){
    int a = 12;
    int *c = &a;
    int n = 8;
    printf("value of a: %d\n", a);

    printf("address of a: %d and the value at pointer c: %d\n\n",&a,c);
    
    // printf("multiply operation with address: %d",(&a * n));   
    // printf("divide operation with address: %d",(&a / n));   
    int* sum,* sub;
    sum = c + n;
    sub = c - n;
    printf("addition operation with address where we add num 8: %d\n",sum);   
    printf("subtraction operation with address where we sub num 8: %d\n",sub);   
    printf("\n");
    printf("Maximum size of int a: %d bytes", sizeof(a));



    return 0;
}