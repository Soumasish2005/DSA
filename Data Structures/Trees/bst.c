
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
}node;

void insertNode(node** root, int data);
void inOrder(node* root);
void preOrder(node* root);
void postOrder(node* root);
int max(node* root);
int min(node* root);
// node* searchNode(node* root, int data);
node* deleteNode(node** root, int data);

int main(){
    node* root = NULL;
    int cho=1,data;
    while(cho){
        printf("\n[1] Insert\t[2] Print in order\t[3] Print pre order\t[4] Print post order\n[5] Max Element\t[6] Min Element\t[7] Delete\t[0] Exit ");
        printf("\nEnter your choice: ");
        scanf("%d",&cho);
        switch(cho){
            case 1:
                printf("Enter data: ");
                scanf("%d",&data);
                insertNode(&root,data);
                break;
            case 2:
                printf("\nIn order: \n");
                inOrder(root);
                break;
            case 3:
                printf("\nPre order: \n");
                preOrder(root);
                break;
            case 4:
                printf("\nPost order: \n");
                postOrder(root);
                break;
            case 5:
                printf("\n %d is the min element\n",max(root));
                break;
            case 6:
                printf("\n %d is the max element\n",min(root));
                break;
            case 7:
                printf("Enter the data to be deleted: ");
                scanf("%d",&data);
                node* temp = deleteNode(&root,data);
                if(temp != NULL){
                    printf("Deleted node is %d\n",temp->data);
                    free(temp);
                }
                break;
            case 0:
                break;
            default:
                printf("Enter proper value. \n");
        }
    }
    return 0;
}

void insertNode(node** root, int data){
    node* newNode = (node*)calloc(1,sizeof(node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    if(*root == NULL){
        *root = newNode;
        return;
    }
    node* parent = NULL;
    node* curr = *root;
    while(curr != NULL){
        parent = curr;
        if(data < curr->data){    
            curr = curr->left;
        }else{
            curr = curr->right;           
        }
    }
    if(data < parent->data){
        parent->left = newNode;

    }else{
        parent->right = newNode;
    }
}

void inOrder(node* root){
    node* stack[50];
    int top = -1;
    node* curr = root;
    while(curr != NULL || top != -1){
        while( curr != NULL ){
            stack[++top] = curr;
            curr = curr->left;
        }
        curr = stack[top--];
        printf("%d ",(curr->data));
        curr = curr->right;
    }
}

void preOrder(node* root){
    node* stack[50];
    int top = -1;
    node* curr = root;
    while(curr != NULL || top != -1){
        while( curr != NULL ){
            printf("%d ",(curr->data));
            stack[++top] = curr;
            curr = curr->left;
        }
        curr = stack[top--];
        curr = curr->right;
    }
}


void postOrder(node* root){
    node* stack[50];
    int top = -1;
    node* lastVisited = NULL;
    node* curr = root;
    while( curr != NULL || top != -1){
        while( curr != NULL ){
            stack[++top] = curr;
            curr = curr->left;
        }
        curr = stack[top--];
        if(curr->right == NULL || curr->right == lastVisited){
            printf("%d ",(curr->data));
            lastVisited = curr;
            curr = NULL;
        }else{
            stack[++top] = curr;
            curr = curr->right;
        }
    }
}

int max(node* root){
    node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp->data;
}

int min(node* root){
    node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp->data;
}

node* deleteNode(node** root, int data){
    if(*root == NULL){
        return NULL;
    }
    node* parent = NULL;
    node* curr = *root;
    while( curr != NULL && curr->data != data){
        parent = curr;
        if(data < curr->data){
            curr = curr->left;
        }else{
            curr = curr->right;
        }
    }
    if(curr == NULL){
        return NULL;
    }else{
        if(curr->left == NULL && curr->right == NULL){
            if(parent == NULL){
                *root = NULL;
            }else if(parent->left == curr){
                parent->left = NULL;
            }else{
                parent->right = NULL;
            }
            return curr;
        }else if(curr->left == NULL){
            if(parent->left == curr){
                parent->left = curr->right;
            }else{
                parent->right = curr->right;
            }
            curr->left = curr->right = NULL;
            return curr;
        }else if(curr->right == NULL){
            if(parent->left == curr){
                parent->left = curr->left;
            }else{
                parent->right = curr->left;
            }
            curr->left = curr->right = NULL;
            return curr;
        }else{
            node* successor = curr->right;
            node* successorParent = curr;
            while(successor->left != NULL){
                successorParent = successor;
                successor = successor->left;
            }
            curr->data = successor->data;
            successorParent->left = successor->right;
            successor->data = data;
            successor->left = successor->right = NULL;
            return successor;
        }
    }

}