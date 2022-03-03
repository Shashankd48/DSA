#include<stdio.h>
#include<conio.h>

int binarySearch (int arr[], int size, int search ){
    int low = 0, high = arr[size - 1];
    int mid = (low + high) / 2;

    while(high >= low){
        if(arr[mid] == search){
            return mid;
        }

        if(arr[mid] < search)
            low = mid + 1;
        else
            high = mid - 1;

        mid = (low + high) / 2;
    }
    return -1;
}

int main(void){
    int arr[] = {2,3,4,5,6,7,8}, search = 2;
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int index = binarySearch(arr, size, search);

    (index == - 1) 
        ? printf("%d Not Found!",search)
        : printf("%d found at index position %d",search,index);

    return 0;
}