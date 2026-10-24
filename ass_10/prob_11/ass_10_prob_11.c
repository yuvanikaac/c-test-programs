#include <stdio.h>
#include <string.h>

int main() {
    char str[60];
    int int_array[50];
    int len = 0;

    
    printf("Enter a number string (up to 50 digits): ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);

    
    if (len > 50) {
        printf("Error: The string exceeds 50 digits.\n");
        return 1;
    }

   
    for (int i = 0; i < len; i++) {
        int_array[i] = str[i] - '0'; 
    }

   
    printf("The integer array is: [");
    for (int i = 0; i < len; i++) {
        printf("%d", int_array[i]);
        if (i < len - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}