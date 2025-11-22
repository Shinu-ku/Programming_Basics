#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node* next;
};

int main() {

    struct Node* first = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;

    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    first->data = 20;
    first->next = second;

    second->data = 40;
    second->next = third;

    third->data = 60;
    third->next = fourth;

    fourth->data = 80;
    fourth->next = first;


    // printf("Value :%d\n",first->data);
    // printf("Value :%d\n",second->data);
    // printf("Value :%d\n",third->data);
    // printf("Value :%d\n",fourth->data);

    struct Node* t = first;
    
    while(t != NULL){
        printf("Value: %d\n",t->data);
        t = t->next;
    }



    return 0;
}