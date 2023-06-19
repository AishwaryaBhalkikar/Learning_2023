#include <stdio.h>

void printIncreasing(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    for (int i = 1; i <= n - 2; i++) {
        printf(" ");
    }
}

void printDecreasing(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        printIncreasing(i);
        printSpaces(n - i);
        if (i != 1) {
            printDecreasing(i);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
