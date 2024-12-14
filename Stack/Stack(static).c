// program to create static stack with the help of array
#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int top;
    int capacity;
    int* arr;
}stack;

stack* init(int size);
int isEmpty(stack* s);
int isFull(stack* s);
void push(stack* s, int data);
int pop(stack* s);
// int peek(stack* s);
void printStack(stack* s);

int main(){
    stack *s = NULL;
    int cho = 1;
    int data = 0;
    int size;
    printf("Size of stack: ");
    scanf("%d", &size);
    s = init(size);
    while (cho!=0) {
        printf("\n[1] Push\t[2] Pop\n[3] Print\t[0] Exit\nEnter your choice:");
        scanf("%d", &cho);
        switch (cho) {
            case 1:
                if (isFull(s)==1) {
                    printf("\nStack overflow ");
                }else {
                    printf("\nEnter data: ");
                    scanf("%d", &data);
                    push(s, data);
                }
                break;
            case 2:
                if (isEmpty(s)==1) {
                    printf("\nStack underflow");
                }else {
                    printf("\nPopped element = %d\n", pop(s));
                }
                break;
            case 3:
                printStack(s);
                break;
            case 0:
                printf("Exit \n");
                break;
            default:
                printf("Select proper option \n");
        }
    }
}

stack* init(int size){
    stack* s = (stack*)calloc(1,sizeof(stack));
    s->capacity = size;
    s->top = -1;
    s->arr = (int*)calloc(size,sizeof(int));
    return s;
}

int isEmpty(stack* s){
    if (s->top==-1) {
        return 1;
    }
    return 0;
}

int isFull(stack* s){
    if (s->top==s->capacity-1) {
        return 1;
    }
    return 0;
}

void push(stack* s, int data){
    s->arr[++(s->top)] = data;
}

int pop(stack* s){
    return s->arr[(s->top)--];
}

// int peek(stack* s){
//     return s->arr[s->top];
// }

void printStack(stack* s){
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}