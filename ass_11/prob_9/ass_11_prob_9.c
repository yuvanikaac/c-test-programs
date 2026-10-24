#include <stdio.h>
void intcon(int *src1, int size1, int *src2, int size2, int *dst) {
    for (int i = 0; i < size1; i++) {
        dst[i] = src1[i];
    }

    for (int j = 0; j < size2; j++) {
        dst[size1 + j] = src2[j];
    }
}

int main() {
    int src1[] = {1, 2, 3};
    int size1 = sizeof(src1) / sizeof(src1[0]);

    int src2[] = {4, 5, 6, 7};
    int size2 = sizeof(src2) / sizeof(src2[0]);
    int dst[size1 + size2];
    intcon(src1, size1, src2, size2, dst);
    printf("Concatenated array elements:\n");
    for (int i = 0; i < (size1 + size2); i++) {
        printf("%d ", dst[i]);
    }
    printf("\n");

    return 0;
}