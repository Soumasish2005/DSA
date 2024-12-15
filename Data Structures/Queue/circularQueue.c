
#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
    int front, rear, count;
    int capacity;
    int* arr;
} cQueue;

cQueue* init(int capacity);
void enqueue(cQueue* q, int data);
int dequeue(cQueue* q);
int isFull(cQueue* q);
int isEmpty(cQueue* q);
void printQueue(cQueue* q);

int main(){
    cQueue *q = NULL;
    int cho = 1;
    int data = 0;
    int size;
    printf("Size of queue: ");
    scanf("%d", &size);
    q = init(size);
    while (cho!=0) {
        printf("\n[1] Enqueue\t[2] Dequeue\n[3] Print\t[0] Exit\nEnter your choice:");
        scanf("%d", &cho);
        switch (cho) {
            case 1:
                if (isFull(q)==1) {
                    printf("\nQueue overflow ");
                }else {
                    printf("\nEnter data: ");
                    scanf("%d", &data);
                    enqueue(q, data);
                }
                break;
            case 2:
                if (isEmpty(q)==1) {
                    printf("\nQueue underflow");
                }else {
                    printf("\nDequeued element = %d\n", dequeue(q));
                }
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

cQueue* init(int capacity){
    cQueue* q = (cQueue*)calloc(1,sizeof(cQueue));
    q->capacity = capacity;
    q->front = -1;
    q->rear = -1;
    q->count = 0;
    q->arr = (int*)calloc(capacity,sizeof(int));
    return q;
}

int isFull(cQueue* q){
    return ((q->count == q->capacity) ? 1 : 0);
}

int isEmpty(cQueue* q){
    return ((q->count == 0) ? 1 : 0);
}

void enqueue(cQueue* q, int data){
    q->rear = ((q->rear)+1)%(q->capacity);
    q->arr[q->rear] = data;
    q->count++;
}

int dequeue(cQueue* q){
    q->front = ((q->front)+1)%(q->capacity);
    int data = q->arr[q->front];
    q->count--;
    return data;
}

void printQueue(cQueue* q){
    int i = q->front+1,j;
    for (j=0;j<(q->count);j++) {
        printf("%d ", q->arr[i]);
        i = (i+1)%(q->capacity);
    }
}