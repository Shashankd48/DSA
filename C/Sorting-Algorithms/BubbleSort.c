#include<stdio.h>
#include<conio.h>

int* bubbleSort(int arr[],int size){
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

int main(void){
    int arr[] = {4,2,1,1,3,6,9,0};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int* list = bubbleSort(arr, size);       

    for(int i = 0; i<size; i++){
        printf("%d ",list[i]);
    }

    return 0;
}