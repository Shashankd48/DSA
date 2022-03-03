#include<stdio.h>

int factorial(int num){
    int result = 1;
    if(num > 0){
        result = num * factorial(num - 1);
    }
    return result;
}

int main(void){
    int input = 0;
    printf("Enter value = ");
    scanf("%d",&input);
    int result = factorial(input);
    printf("\nFactorial = %d",result);
    return 0;
}