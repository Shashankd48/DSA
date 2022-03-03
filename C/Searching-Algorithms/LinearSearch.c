#include<stdio.h>
#include<conio.h>

int linearSearch(int array[], int search, int length){
    int index = -1;
    for(int i = 0; i<length; i++){
        if(search == array[i] ){
            index = i;
            break;
        }
    }
    return index;
}

int main(void){
    int array[] = {2,4,5,6,8,3}, search = 5;
    size_t length = sizeof(array) / sizeof(array[0]);

    int index = linearSearch(array, search, length);

    if (index){
        printf("%d found at index position %d",search,index);
    }else{
        printf("%d not found!",search);
    }

    return 0;
}