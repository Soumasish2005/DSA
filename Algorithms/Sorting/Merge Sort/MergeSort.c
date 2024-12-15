#include<stdio.h>
#include<stdlib.h>

int mergeSort(int arr[], int start, int end);
void merge(int arr[], int start, int mid, int end);
void printArr(int arr[], int n);

int main(){
    int arr[] = { 5,1,3,2,4 };
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    printf("\nSorted arr: \n");
    printArr(arr,n);
}

int mergeSort(int arr[], int start, int end){
    if( start < end){
        int mid = start + (end - start)/2;

        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);

        merge(arr,start,mid,end);
    }
}

void merge(int arr[], int start, int mid, int end){
    int i,j,k;
    int s1 = mid - start + 1;
    int s2 = end - mid;
    int leftArr[s1];
    int rightArr[s2];
    for(i=0; i<s1;i++){
        leftArr[i] = arr[start+i];
    }
    for(j=0; j<s2; j++){
        rightArr[j] = arr[mid+1+j];
    }
    i=0,j=0,k=start;
    while (i < s1 && j < s2)
    {
        if(leftArr[i] <= rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        }else{
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    while( i < s1 ){
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while( j < s2 ){
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void printArr(int arr[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}