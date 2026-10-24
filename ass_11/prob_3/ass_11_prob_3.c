#include <stdio.h>
void arrange_ascend(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; 
    }
}

int main() {
    int size = 5;
    int arr[5];
    arrange_ascend(arr, size);
    printf("The numbers from 1 to 5 are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}