#include<stdio.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main(void){
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    printf("Num1: %d\n",num1);
    printf("Num2: %d\n",num2);

    return 0;
}