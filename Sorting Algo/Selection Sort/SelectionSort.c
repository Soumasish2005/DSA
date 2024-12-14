#include<stdio.h>
#include<stdlib.h>

int selectionSort(int arr[], int n, int v_flag);
void printArr(int arr[], int n);

int main(){
    int arr[5] = { 4,1,3,2,5 };
    selectionSort(arr,5,1);
    printf("\nSorted arr: \n");
    printArr(arr,5);
}


int selectionSort(int arr[], int n, int v_flag){
    int i,j,min_idx;

    for(i=0; i<n-1; i++){
        min_idx = i;
        for(j=i+1; j<n; j++){
            if( arr[min_idx] > arr[j]){
                min_idx = j;
            }
        }
        if( min_idx != i ){
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
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