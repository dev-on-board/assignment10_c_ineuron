//Write a function to check whether a given number contains a given digit or not.
//(TSRS)

#include<stdio.h>
int check(int n,int digit){
    int rem=1;
    while(n!=0){
        rem=n%10;
        if(rem==digit){
            return 1;
     }
     n=n/10;
    }
    return 0;
}

int main(){
    int result = check(12,2);
    printf("%d",result);
    return 0;
}