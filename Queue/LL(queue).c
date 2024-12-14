#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}node;

void insertLast(node** head, int data);
int deleteFirst(node** head);
void printList(node *head);

void insertLast(node** head, int data){
    node* temp = *head;
    if(temp == NULL){
        insertFirst(head,data);
    }else{ 
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        node* newnode = (node*)calloc(1,sizeof(node));
        newnode->data = data;
        newnode->link = NULL;
        temp->link = newnode;
    }
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