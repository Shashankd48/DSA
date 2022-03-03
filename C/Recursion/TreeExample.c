#include<stdio.h>

void dualRecursion(int n){
    if(n>0){
        dualRecursion(n-1);
        dualRecursion(n-1);
        printf("%d ",n);
    }
}

int main(void){
    dualRecursion(3);
    return 0;
}