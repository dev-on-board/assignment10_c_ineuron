//Write a function to calculate the number of combinations one can make from n items
//and r selected at a time. (TSRS)

#include<stdio.h>

int fact(int n){
    int i,fact=1;
    for (i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int combination(int n ,int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    printf("%d",combination(5,5));
    return 0;
}