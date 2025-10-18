#include <stdio.h>

int main(){
    // printf("\nArray Basics\n");
    char name[] = {"Pranav Swaroop Maharaj Swaroop Swamicharan Samaldas Satsangi"};
    int size = sizeof(name);
    printf("The name contains %d letters\n", size);
    printf("Name: ");
    for (int i=0; i<size;i++){
        printf("%c",name[i] );
    }
    printf("\n");    
    return 0;
}