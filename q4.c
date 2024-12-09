//Write a function to print first N natural numbers (TSRN)
#include <stdio.h>

void printNaturalNumbers(int N) {
    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printNaturalNumbers(N);
    return 0;
}

