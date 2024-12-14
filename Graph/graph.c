#include<stdio.h>
#include<stdlib.h>
#include"circularQueue.c"

typedef struct Graph{
    int **arr;
    int v;
    int e;
}graph;

graph* initGraph(int V);
void printAdjMatrix(graph* g);
int* graph_bfs(graph* g, int start);
int* graph_dfs(graph* g, int start);

int main(){
    int nodeCount=0,i,j;
    int* res = NULL;
    int* res1 = NULL;
    graph* g = NULL;
    printf("Enter number of nodes: ");
    scanf("%d",&nodeCount);
    g = initGraph(nodeCount);
    res = (int*)calloc(nodeCount,sizeof(int));
    res1 = (int*)calloc(nodeCount,sizeof(int));
    for(i=0;i< (g->v);i++){
        for(j=0;j<=i;j++){
            if( i != j ){
                int temp;
                printf("\n Is there edge between nodes %d and %d?\n [1] YES\t[0] NO\n Enter choice: ",i+1,j+1);
                while(1){
                    scanf("%d",&temp);
                    if(temp == 1 || temp == 0){
                        break;
                    }else{
                        printf("\n Enter proper option \n Enter choice: ");
                    }
                }
                g->arr[i][j] = g->arr[j][i] = temp;
            }
        }
    }
    printAdjMatrix(g);
    printf(" --- BFS Traversal --- \n  ");
    res = graph_bfs(g,1);
    for(i=0;i<nodeCount;i++){
        printf("%d ",res[i]+1);
    }
    printf("\n --- DFS Traversal --- \n  ");
    res1 = graph_dfs(g,1);
    
    for(i=0;i<nodeCount;i++){
        printf("%d ",res1[i]+1);
    }
    printf("\n");
    return 0;
}

graph* initGraph(int V){
    int i,j;
    graph* g = (graph*)calloc(1,sizeof(graph));
    g->v = V;
    g->arr = (int**)calloc(V,sizeof(int*));
    for(i=0;i< V;i++){
        g->arr[i] = (int*)calloc(V,sizeof(int));
    }
    return g;
}

int* graph_bfs(graph* g, int start){
    int* res = NULL;
    int* visited = NULL;
    int vert = g->v, i, j=0, temp;
    queue* q = init(vert);
    // int q[100];
    // int front = 0, rear = 0; 
    visited = (int*)calloc(vert,sizeof(int));
    res = (int*)calloc(vert,sizeof(int));
    visited[start-1] = 1;
    enqueue(q,(start-1));
    // q[rear++] = start-1;
//  front < rear 
    while( isEmpty(q) != 1  ){
        temp = dequeue(q);
        // temp = q[front++];
        
        res[j++] = temp;
        for( i=0; i < vert; i++){
            if( g->arr[temp][i] == 1 && !visited[i] ){
                visited[i] = 1;
                enqueue(q,i);
                // q[rear++] = i;
            }
        }
    }
    return res;
}

int* graph_dfs(graph* g, int start){
    int* res = NULL;
    int* visited = NULL;
    int vert = g->v, i, j=0, temp;
    int stack[100];
    int top = -1;
    visited = (int*)calloc(vert,sizeof(int));
    res = (int*)calloc(vert,sizeof(int));
    visited[start-1] = 1;
    stack[++top] = start-1;
    while( top != -1 ){
        temp = stack[top--];
        res[j++] = temp;
        for( i=0; i < vert; i++){
            if( g->arr[temp][i] == 1 && !visited[i] ){
                visited[i] = 1;
                stack[++top] = i;
            }
        }
    }
    return res;
}

void printAdjMatrix(graph* g){
    int i,j;
    printf("\n --- Adjacency Marix Representation --- \n");
    for( i=0; i < (g->v); i++ ){
        for( j=0; j<(g->v); j++ ){
            printf("%d ",g->arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}