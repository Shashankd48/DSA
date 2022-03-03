#include<stdio.h>
#include<conio.h>

int* insertionSort(int arr[],int size){
    for(int i = 1; i<size; i++){
        int temp = arr[i];
        for(int j = i-1; j>=0 && arr[j] > temp; j-- ){
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
    return arr;
}

int main(void){
    int arr[] = {-1, 50, 40, 30, 20, 10};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int* list = insertionSort(arr, size);

    for(int i = 0; i<size; i++){
        printf("%d ",list[i]);
    }

    return 0;
}