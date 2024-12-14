
#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
    int front;
    int rear;
    int capacity;
    int count;
    int* arr;
}queue;

queue* init(int size);
int isEmpty(queue* q);
int isFull(queue* q);
void enqueue(queue* q, int data);
int dequeue(queue* q);
void printQueue(queue* q);

int main(){
    queue *q = NULL;
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

queue* init(int size){
    queue* q = (queue*)calloc(1,sizeof(queue));
    q->capacity = size;
    q->arr = (int*)calloc(size,sizeof(int));
    q->front = q->rear = -1;
    q->count = 0;
    return q;
}

int isEmpty(queue* q){
    if (q->count==0) {
        return 1;
    }
    return 0;
}

int isFull(queue* q){
    if (q->count==q->capacity) {
        return 1;
    }
    return 0;
}

void enqueue(queue* q, int data){
    if (q->rear==q->capacity-1) {
        q->rear = -1;
    }
    q->arr[++(q->rear)] = data;
    q->count++;
}

int dequeue(queue* q){
    int data = q->arr[++(q->front)];
    if (q->front==q->capacity-1) {
        q->front = -1;
    }
    q->count--;
    return data;
}

void printQueue(queue* q){
    for (int i = q->front+1; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }
}