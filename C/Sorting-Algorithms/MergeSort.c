#include<stdio.h>
#include<stdlib.h>

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

void merge(int *arr, int low, int mid, int high){
    int size1 = mid - low + 1;
    int size2 = high - mid;

    int *leftArray = (int*) malloc(sizeof(int) * size1);
    int *rightArray = (int*) malloc(sizeof(int) * size2);

    for (int i = 0; i < size1; i++){
        leftArray[i] = arr[low + i];
    }

    for (int j = 0; j < size2; j++){
        rightArray[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;

    while (i < size1 && j < size2){
        if(leftArray[i] <= rightArray[j]){
            arr[k] = leftArray[i];
            i++;
        }else{
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < size1){
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < size1){
        arr[k] = rightArray[j];
        j++;
        k++;
    }
    
}

void mergeSort(int *arr, int low, int high){
    if(low < high){
        int mid = (low + high - 1) / 2;

        printf("%d ",mid);

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main(void){
    int arr[] = {15,5,24,8,1,3,16,10,20};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array: ");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);
    
    printf("\nSorted Array: ");
    printArray(arr, size);

    return 0;
}