#include <stdio.h>

int main (){
    int x,y,i;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("Enter the power: ");
    scanf("%d", &y);
    int res = 1;

    for(i=0;i<y;i++){
        res = res*x;
    }
    printf("The result is: %d", res);
}