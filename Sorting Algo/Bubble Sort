#include<stdio.h>
#include<stdlib.h>

int bubbleSort(int arr[], int n);
void printArr(int arr[], int n);

int main(){
    int arr[5] = { 4,1,3,2,5 };
    bubbleSort(arr,5);
    printArr(arr,5);
}

int bubbleSort(int arr[], int n){
    int i,j;
    for(i=0; i < n; i++){
        int swapped = 0;
        for(j=i+1; j < n; j++){
            if( arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            swapped = 1;
        }
        if( swapped == 0){
            break;
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