#include<stdio.h>

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(int *arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);

    return i+1;
}

void quickSort(int *arr, int low, int high){
    if(low < high){
        int partitionIndex = partition(arr, low, high);

        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high );
    }
}

int main(void){
    int arr[] = {40, 20, 60, 10, 50, 30, 25, 35};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array: ");
    printArray(arr, size);

    quickSort(arr, 0, size - 1);
    
    printf("\nSorted Array: ");
    printArray(arr, size);

    return 0;
}