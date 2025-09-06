#include <stdio.h>

int main()
{
    // single line comment     
    // compiler will ignore this
    
    int a = 75;
    printf("%d\n", a);
    printf("You are so smart\n");


    int x = 7;
    int y = 0;
 
    int is_equal = (x == y);     
    int is_not_equal = (x != y); 
    int is_greater_than = (x > y);  

    printf("Is equal: %d\n", is_equal);
    printf("Is not equal: %d\n", is_not_equal);
    printf("Is greater than: %d\n", is_greater_than);

    return 0;


}

