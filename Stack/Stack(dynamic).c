

#include<stdio.h>
#include<stdlib.h>
#include "LL(stack).c"

typedef struct stack{
    node* top;
}stack;

stack* init();
void push(stack* s, int data);
int pop(stack* s);
int isEmpty(stack* s);
void display(stack* s);

int main(){
    stack *s = init();
    int cho = 1;
    int data = 0;
    while (cho!=0) {
        printf("\n[1] Push\t[2] Pop\n[3] Print\t[0] Exit\nEnter your choice:");
        scanf("%d", &cho);
        switch (cho) {
            case 1:
                    printf("\nEnter data: ");
                    scanf("%d", &data);
                    push(s, data);
                break;
            case 2:
                if (isEmpty(s)==1) {
                    printf("\nStack underflow");
                }else {
                    printf("\nPopped element = %d\n", pop(s));
                }
                break;
            case 3:
                display(s);
                break;
            case 0:
                printf("Exit \n");
                break;
            default:
                printf("Select proper option \n");
        }
    }
}

stack* init(){
    stack* s = (stack*)calloc(1,sizeof(stack));
    s->top = NULL;
    return s;
}

void push(stack* s, int data){
    insertFirst(&(s->top), data);
}

int pop(stack* s){
    return deleteFirst(&(s->top));
}

void display(stack* s){
    printList(s->top);
}

int isEmpty(stack* s){
    if(s->top == NULL){
        return 1;
    }
    return 0;
}