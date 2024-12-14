#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}node;

void insertFirst(node** head, int data);
int deleteFirst(node** head);
void printList(node *head);

void insertFirst(node** head, int data){
    node* newnode = (node*)calloc(1,sizeof(node));
    newnode->data = data;
    newnode->link = *head;
    *head = newnode;
}

int deleteFirst(node** head){
    if( *head == NULL ){
        return 0;
    }
    node* temp = *head;
    *head = temp->link;
    int data = temp->data;
    free(temp);
    return data;
}

void printList(node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->link;
    }
    printf("nullptr \n");
}