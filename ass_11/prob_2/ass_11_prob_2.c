#include <stdio.h>


void incrementArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i]++; 
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array before function call:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    incrementArray(arr, size);
    printf("Array after incrementing inside the function:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}