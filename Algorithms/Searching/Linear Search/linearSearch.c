#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[],int size, int key);

void main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int res_idx = linearSearch(arr,size,5);
    if(res_idx == -1){
        printf("Element not found\n");
    }else{
        printf("Element found at index %d\n",res_idx);
    }
}

int linearSearch(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}