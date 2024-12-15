#include<stdio.h>
#include<stdlib.h>

void qSort(int arr[], int start, int end);
int partition( int arr[], int start, int end);
void swap(int* a, int* b);
void printArr(int arr[], int n);

int main(){
    int arr[] = { 5,1,3,2,4 };
    int n = sizeof(arr)/sizeof(arr[0]);
    qSort(arr,0,n-1);
    printf("\nSorted arr: \n");
    printArr(arr,n);
}

void qSort(int arr[], int start, int end){
       if( start < end ){
        int q = partition(arr,start,end);

        qSort(arr,start,q-1);
        qSort(arr,q+1,end);
       }
}

int partition( int arr[], int start, int end){
    int pivot = arr[end];
    int i = start - 1,j;

    for(j=0; j<= end-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    i++;
    swap(&arr[i],&arr[end]);
    return i;
}

     
void swap(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void printArr(int arr[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}