#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}node;

// Defining linked list operations

node* init(int size);
void insertFirst(node** head, int data);
void insertLast(node** head, int data);
void insertAt(node** head, int data, int position);
int deleteFirst(node** head);
int deleteLast(node** head);
int deleteAt(node** head, int position);
void printList(node *head);
void reverseList(node** head);

int main() {
    node* head = NULL;
    int data, position, cho = 1;
    printf("Linked List Operations \n");
    while (cho != 0) {
        printf("\n[1] Insert First \n[2] Insert Last \n[3] Insert Position \n[4] Delete First \n[5] Delete Last \n[6] Delete Position \n[7] Print List \n[8] Reverse List \n[0] Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &cho);
        switch (cho) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &data);
                insertFirst(&head, data);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &data);
                insertLast(&head, data);
                break;
            case 3:
                printf("Enter value: ");
                scanf("%d %d", &data, &position);
                insertAt(&head, position, data);
                break;
            case 4:
                int val = deleteFirst(&head);
                if(val != 0){printf("Deleted data: %d",val);}
                else{printf("List is empty, nothing to delete.\n");}
                break;
            case 5:
                deleteLast(&head);
                break;
            case 6:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteAt(&head, position);
                break;
            case 7:
                printList(head);
                break;
            case 8:
                reverseList(&head);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void insertFirst(node** head, int data){
    node* newnode = (node*)calloc(1,sizeof(node));
    newnode->data = data;
    newnode->link = *head;
    *head = newnode;
}

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

void insertAt(node** head, int data, int position){
    node* temp = *head;
    int i;
    if(temp == NULL){
        insertFirst(head,data);
    }else{
        for(i=0; i< position-1; i++){
            temp = temp->link;
        }
        node* newnode = (node*)calloc(1,sizeof(node));
        newnode->data = data;
        newnode->link = temp->link;
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

int deleteLast(node** head){
    node* temp = *head;
    if( temp->link == NULL){
        deleteFirst(head);
    }else{
        while (temp->link->link != NULL)
        {
            temp = temp->link;
        }
        int data = (temp->link)->data;
        free(temp->link);
        temp->link = NULL;
    }
}

int deleteAt(node** head, int position){
    node *temp = *head;
    int i;
    if(position == 1){
        deleteFirst(head);
    }
    for(i=0; i<position-1; i++){
        temp = temp->link;
    }
    int data = (temp->link)->data;
    temp->link = temp->link->link;
    free(temp->link);
    return data;
}

void reverseList(node** head){
    node* prev = NULL;
    node* current = *head;
    node* next = current->link;
    while(current != NULL){
        current->link = prev;
        prev = current;
        current = next;
        if(next != NULL){
            next = next->link;
        }
    }
    *head = prev;
}

void printList(node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->link;
    }
    printf("nullptr \n");
}