
#include <stdio.h>
#include <stdlib.h>

typedef struct threaded_bst
{
    int data;
    struct threaded_bst* left;
    struct threaded_bst* right;
    int isLeftThreaded,isRightThreaded;    
}node;

node* createNode(int data);
void insert(node** root, int data);
void inOrder(node* root);
void reverseOrder(node* root);

int main(){
    node* root = NULL;    
    int cho=1,data;
    while(cho != 0){
        printf("\n[1] Insert\t[2] Print in order\t[3] Print reverse order\n[0] Exit ");
        printf("\nEnter your choice: ");
        scanf("%d",&cho);
        switch(cho){
            case 1:
                printf("Enter data: ");
                scanf("%d",&data);
                insert(&root,data);
                break;
            case 2:
                printf("\nIn order: \n");
                inOrder(root);
                break;
            case 3:
                printf("\nReverse order: \n");
                reverseOrder(root);
                break;
        }
    }
}

node* createNode(int data){
    node* newNode = (node*)calloc(1,sizeof(node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->isLeftThreaded = 1;
    newNode->isRightThreaded = 1;
    return newNode;
}

void insert(node** root, int data){
    node* newNode = createNode(data);
    if(*root == NULL){
        *root = newNode;
        return;
    }
    node* parent = NULL;
    node* curr = *root;
    while(curr != NULL){
        parent = curr;
        if(data < curr->data){
            if(curr->isLeftThreaded == 0){
                curr = curr->left;
            }else
                break;
        }else{
            if(curr->isRightThreaded == 0){
                curr = curr->right;
            }else   
                break;
        }
    }
    if(data < parent->data){
        newNode->left = parent->left;
        newNode->right = parent;
        parent->left = newNode;
        parent->isLeftThreaded = 0;
    }else{
        newNode->right = parent->right;
        newNode->left = parent;
        parent->right = newNode;
        parent->isRightThreaded = 0;
    }
}

void inOrder(node* root){
    if(root == NULL){
        return;
    }
    node* curr = root;
    while(curr->left != NULL){
        curr = curr->left;
    }
    while(curr != NULL){
        printf("%d ",curr->data);
        if(curr->isRightThreaded == 1){
            curr = curr->right;
        }else{
            curr = curr->right;
            while(curr->left != NULL && curr->isLeftThreaded == 0){
                curr = curr->left;
            }
        }
    }
}

void reverseOrder(node* root){
    if(root == NULL){
        return;
    }
    node* curr = root;
    while(curr->right != NULL){
        curr = curr->right;
    }
    while(curr != NULL){
        printf("%d ",curr->data);
        if(curr->isLeftThreaded == 1){
            curr = curr->left;
        }else{
            curr = curr->left;
            while(curr->left != NULL && curr->isRightThreaded == 0){
                curr = curr->right;
            }
        }
    }
}