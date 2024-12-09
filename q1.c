//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area (float r){
    return 3.14*r*r;
}

int main(){
    printf("%.2f",area(2));
}