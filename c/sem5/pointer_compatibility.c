// take care of compatibility
#include <stdio.h>

int main (){
    int a = 12;
    char b = 'A';

    int* c = &a;
    char* d = &b;
    void* e = &a;
    void* f = &b;

    printf("-------------Value-------------\n");
    printf("value of a: %d\n",a);
    printf("value of b: %c\n",b);
    printf("value of pointer c: %d\n",c);
    printf("value of pointer d: %d\n",d);
    printf("value of pointer e: %d\n",e);
    printf("value of pointer f: %d\n",f);

    printf("------------address-----------\n");
    printf("address of a: %d\n",&a);
    printf("address of b: %d\n",&b);
    printf("address of pointer c: %d\n",&c);
    printf("address of pointer d: %d\n",&d);
    printf("address of pointer e: %d\n",&e);
    printf("address of pointer f: %d\n",&f);

    return 0;
}