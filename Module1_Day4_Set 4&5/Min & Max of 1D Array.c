#include <stdio.h>

#define SIZE 5 // Size of the array

int main() {
    int array[SIZE] = {3, 1, 4, 2, 5};
    int min = array[0]; // Initialize min with the first element of the array
    int max = array[0]; // Initialize max with the first element of the array
    int i;

    // Finding the minimum and maximum values
    for (i = 1; i < SIZE; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    // Printing the minimum and maximum values
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
