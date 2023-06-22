#include <stdio.h>

#define SIZE 5 // Size of the array

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5};
    int start = 0;
    int end = SIZE - 1;
    int temp;

    // Reversing the array
    while (start < end) {
        // Swapping elements at start and end indices
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        // Move start index towards the end
        start++;

        // Move end index towards the start
        end--;
    }


    printf("Reversed Array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
