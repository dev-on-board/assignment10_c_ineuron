//Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>

int func(int n){
    int i,fact=1;
    for (i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);
}

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    func(n);
    return 0;
}