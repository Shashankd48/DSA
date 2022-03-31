#include<stdio.h>
#include<conio.h>

int binarySearch (int arr[], int size, int search, int low, int high ){
    
    int mid = (low + high) / 2;

    if(high < low) return -1;

    if(arr[mid] == search){
        return mid;
    }

    if(arr[mid] < search)
        return binarySearch(arr, size, search, mid + 1, high);
    else
        return binarySearch(arr, size, search, low, mid - 1);
}

int main(void){
    int arr[] = {2,3,4,5,6,7,8}, search = 7;
    
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int low = 0, high = arr[size - 1];
    int index = binarySearch(arr, size, search, low, high);

    (index == - 1) 
        ? printf("%d Not Found!",search)
        : printf("%d found at index position %d",search,index);

    return 0;
}