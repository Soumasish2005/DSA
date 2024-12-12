#include<stdio.h>
#include<stdlib.h>

typedef struct queue{
    int *arr;
    int front;
    int rear;
    int size;
    int count;
}queue;

queue* init(int size);
void enqueue(queue *q, int data);
int dequeue(queue *q);
int isEmpty(queue *q);
int isFull(queue *q);
void printQueue(queue *q);

// int main(){
//     queue *q = NULL;
//     int cho=1,data=0;
//     printf("\nEnter size of queue: ");
//     int size;
//     scanf("%d",&size);
//     q = init(size);
//     while(cho != 0){
//         printf("\n[1] Enqueue\t[2] Dequeue\t[3] Print\t[0] Exit\nEnter your choice: ");
//         scanf("%d",&cho);
//         switch(cho){
//             case 1: 
//                 if(isFull(q) == 1){
//                     printf("\nQueue is full\n");
//                 } else {
//                     printf("\nEnter data: ");
//                     scanf("%d",&data);
//                     enqueue(q, data);
//                 }
//                 break;
//             case 2: 
//                 if(isEmpty(q) == 1){
//                     printf("\nQueue is empty\n");
//                 } else {
//                     int data = dequeue(q);
//                     printf("\nDequeued data: %d\n", data);
//                 }
//                 break;
//             case 3: 
//                 printQueue(q);
//                 break;
//             case 0: 
//                 printf("\nExiting...\n");
//                 break;
//             default: 
//                 printf("\nInvalid choice\n");
//                 break;
//         }
//     }
//     return 0;
// }

queue* init(int size){
    queue *q = (queue*)calloc(1, sizeof(queue));
    q->arr = (int*)calloc(size, sizeof(int));
    q->front = -1;
    q->rear = -1;
    q->count = 0;
    q->size = size;
    return q;
}

int isEmpty(queue *q){
    if(q->front == q->rear){
        return 1;
    }
    return 0;
    // return (q->count == 0 );
}

int isFull(queue *q){
    if (q->count == q->size){
        return 1;
    }
    return 0;
}

void enqueue(queue *q, int data){
    // if (q->front == -1) {
    //     q->front = 0; 
    // }
    q->rear = (q->rear + 1) % q->size;
    q->arr[q->rear] = data;
    q->count++;
    if (q->count == 0) {
        q->front = -1;
        q->rear = -1;
    }
    
}

int dequeue(queue *q){
    // q->front = (q->front + 1) % q->size;
    
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    }
    else {
        q->front = (q->front + 1) % q->size;
    }
    int data = q->arr[q->front];
    q->count--;
    return data;
}

void printQueue(queue *q){

    int i = q->front,j;
    for (j=0; j < q->count;j++){
        printf("%d ", q->arr[i]);
        i = ((i+1)%(q->size));
    }
    printf("\n");
}
