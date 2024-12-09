//Write a function to calculate the number of arrangements one can make from n items
//and r selected at a time. (TSRS)

#include<stdio.h>

int fact(int n){
    int i,fact=1;
    for (i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int permutation(int n ,int r){
    return fact(n)/fact(n-r);
}

int main(){
    printf("%d",permutation(5,5));
    return 0;
}