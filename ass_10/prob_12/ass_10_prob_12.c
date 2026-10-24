#include <stdio.h>

int main() {
    
    int int_array[] = {1, 4, 5, 8, 7, 6, 3};
    int len = sizeof(int_array) / sizeof(int_array[0]);

    char char_array[60];

    
    for (int i = 0; i < len; i++) {
        char_array[i] = int_array[i] + '0';
    }
    
    
    char_array[len] = '\0';

    
    printf("%s\n", char_array);

    return 0;
}