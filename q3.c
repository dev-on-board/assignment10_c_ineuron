//Write a function to check whether a given number is even or odd. Return 1 if the
//number is even, otherwise return 0. (TSRS)

#include<stdio.h>
int num(int n){
    if(n%2==0)
    printf("it is an even number");
    else
    printf("it is an odd number");
}

int main(int a){
    printf("enter a number :");
    scanf("%d",&a);
    (num(a));
    
}