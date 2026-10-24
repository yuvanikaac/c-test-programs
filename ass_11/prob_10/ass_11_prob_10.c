#include <stdio.h>
void strcon(char *src1, char *src2, char *dst) {
    int i = 0, j = 0;

    while (src1[i] != '\0') {
        dst[i] = src1[i];
        i++;
    }

    while (src2[j] != '\0') {
        dst[i] = src2[j];
        i++;
        j++;
    }

    dst[i] = '\0';
}

int main() {
    char src1[] = "Hello, ";
    char src2[] = "World!";
    char dst[50]; 
    strcon(src1, src2, dst);
    printf("Concatenated string: %s\n", dst);

    return 0;
}