#include <stdio.h>
int strcmp(char *src, char *dst) {
    int i = 0;
    while (src[i] != '\0' && dst[i] != '\0') {
        if (src[i] != dst[i]) {
            return 0; 
        }
        i++;
    }
   
    if (src[i] == '\0' && dst[i] == '\0') {
        return 1; 
    }
    return 0; 
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result = strcmp(str1, str2);
    if (result == 1) {
        printf("success\n");
    } else {
        printf("failure\n");
    }

    return 0;
}