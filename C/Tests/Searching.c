#include<stdio.h>
#include<conio.h>

int binarySearch(int arr[], int size, int search){
    int low = 0, high = size -1, index = -1;
    while(high >= low){
        int mid = (low + high) / 2;

        if(arr[mid] == search)
            return mid;
        if(search > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return index;
}

int linearSearch(int arr[], int size, int search){
    int index = -1;
    for(int i = 0; i<size; i++){
        if(arr[i] == search)
            return i;
    }
    return index;
}

int main(void){
    int sortedArray[] = {2,3,4,5,6,7,8}, unsortedArray[] = {3,5,2,4,1,3,9};
    int saSearch = 7, uaSearch = 1;
    size_t saSize = sizeof(sortedArray) / sizeof(sortedArray[0]);
    size_t usSize = sizeof(unsortedArray) / sizeof(unsortedArray[0]);
    
    int saIndex = binarySearch(sortedArray, saSize, saSearch);
    (saIndex == -1) 
        ? printf("%d Not found!\n",saSearch)
        : printf("%d found at index %d\n",saSearch,saIndex);

    int uaIndex = linearSearch(unsortedArray, saSize, uaSearch);
    (uaIndex == -1) 
        ? printf("%d Not found!\n",uaSearch)
        : printf("%d found at index %d\n",uaSearch,uaIndex);

    return 0;
}