// Dynamic memory allocation of array using malloc and extend with realloc.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    
    // Allocate memory for 5 integers
    arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated\n");
        return 1;  // Exit if allocation fails
    }

    // Input the initial 5 elements
    printf("Enter 5 Elements:\n");
    for (int ind = 0; ind < 5; ind++) {
        scanf("%d", &arr[ind]);
    }

    // Display the initial 5 elements
    printf("Values:\n");
    for (int ind = 0; ind < 5; ind++) {
        printf("Val: %d\n", arr[ind]);
    }

    // Extend the memory to hold 7 integers
    arr = (int *)realloc(arr, 7 * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated\n");
        return 1;  // Exit if allocation fails
    }

    // Input the additional 2 elements
    printf("Enter Extended 2 Elements:\n");
    for (int ind = 5; ind < 7; ind++) {
        scanf("%d", &arr[ind]);
    }

    // Display all 7 elements
    printf("All Values:\n");
    for (int ind = 0; ind < 7; ind++) {
        printf("Val: %d\n", arr[ind]);
    }

    // Free the allocated memory
    free(arr);
    arr = NULL;

    return 0;
}