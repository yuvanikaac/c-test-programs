#include <stdio.h>
int memcomp(int *src, int *dst, int size) {
    for (int i = 0; i < size; i++) {
        if (src[i] != dst[i]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int result = memcomp(arr1, arr2, size);
    if (result == 1) {
        printf("Success\n");
    } else {
        printf("failure\n");
    }

    return 0;
}