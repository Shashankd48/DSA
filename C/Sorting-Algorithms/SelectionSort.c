#include<stdio.h>
#include<conio.h>

int* selectionSort(int arr[],int size){
    for(int i = 0; i<size-1; i++){
        int min = i;
        for(int j = i + 1; j<size; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    return arr;
}

int main(void){
    int arr[] = {40, 20, 60, 10, 50, 30};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int* list = selectionSort(arr, size);

    for(int i = 0; i<size; i++){
        printf("%d ",list[i]);
    }

    return 0;
}