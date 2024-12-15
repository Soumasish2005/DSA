#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int start, int end, int key);

void main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int res_idx = binarySearch(arr, 0, n - 1, key);
    if (res_idx == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", res_idx);
    }
}

int binarySearch(int arr[], int start, int end, int key){
    int mid;
    
    while(start < end){
        mid = start + (end - start) / 2;
        if(arr[mid] == key){
            return mid;
        }else if(key < arr[mid]){
            end = mid - 1;
        }else if(key > arr[mid]){
            start = mid + 1;
        }else{
            break;
        }
    }
    return -1;
}