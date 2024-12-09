//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float SI(float p,float t , float r){
    return (p*t*r)/100;
}

int main(){
    printf("%.2f",SI(2000,2,8));
}