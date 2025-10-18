#include <stdio.h>

int main(){
    int a = 10;
    int *b = &a;
    int **c = &b;
    printf("value of a: %d\n",a);
    printf("value of b: %d\n",b);
    printf("value of c: %d\n",c);
    printf("address of a: %d\n",&a);
    printf("address of b: %d\n",&b);
    printf("address of c: %d\n",&c);
    return 0;
}
// take care of compatibility
// we can'n add two addresses
// address can't run by multiply and divide operation 
// but they can add or sub 