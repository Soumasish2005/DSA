#include<stdio.h>
#include<stdlib.h>

int insertionSort(int arr[], int n, int v_flag);
void printArr(int arr[], int n);

int main(){
    int arr[5] = { 4,1,3,2,5 };
    insertionSort(arr,5,1);
    printf("\nSorted arr: \n");
    printArr(arr,5);
}


int insertionSort(int arr[], int n, int v_flag){
    int i,j,key;

    for(i=1; i<n; i++){
        key = arr[i];
        j = i-1;
        while( j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        if( v_flag == 1){
            printf("\nIteration %d: ",i);
            printArr(arr,n);
        }
    }

}

void printArr(int arr[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}