

#include <stdio.h>
#include <stdlib.h>
#include "LL(queue).c"

typedef struct queue{
    node* front;
    node* rear;
}queue;

queue* init();
void enqueue(queue* q, int data);
int dequeue(queue* q);
void printQueue(queue* q);

int main(){
    queue *q = init();
    int cho = 1;
    int data = 0;
    while (cho!=0) {
        printf("\n[1] Enqueue\t[2] Dequeue\n[3] Print\t[0] Exit\nEnter your choice:");
        scanf("%d", &cho);
        switch (cho) {
            case 1:
                    printf("\nEnter data: ");
                    scanf("%d", &data);
                    enqueue(q, data);
                break;
            case 2:
                    printf("\nDequeued element = %d\n", dequeue(q));
                break;
            case 3:
                printQueue(q);
                break;
            case 0:
                printf("Exit \n");
                break;
            default:
                printf("Select proper option \n");
        }
    }
}

queue* init(){
    queue* q = (queue*)calloc(1,sizeof(queue));
    if(q == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
    q->front = NULL;
    q->rear = NULL;
    return q;
}

void enqueue(queue* q, int data){
    insertLast(&(q->rear),data);
    if(q->front == NULL){
        q->front = q->rear;
    }
}

int dequeue(queue* q){
    if(q->front == NULL){
        printf("Queue underflow\n");
        return -1;
    }
    int data = deleteFirst(&(q->front));
    if(q->front == NULL){
        q->rear = NULL;
    }
    return data;
}