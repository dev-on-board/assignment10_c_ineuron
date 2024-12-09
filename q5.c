//Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>

void odd_num(int n){
    int i;
    for (i=1;i<=n*2;i+=2){
        printf("%d ",i);
    }
}

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    odd_num(n);
    return 0;
}
