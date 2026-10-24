#include <stdio.h>
void strcopy(char *src, char *dst) {
    int i = 0;
    while (src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';
}

int main() {
    char src[] = "Hello, World!";
    char dst[50]; 
    strcopy(src, dst);
    printf("Source string: %s\n", src);
    printf("Copied string: %s\n", dst);

    return 0;
}