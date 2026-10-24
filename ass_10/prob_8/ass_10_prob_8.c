#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[60];
    int isValid = 1;

    printf("Enter a number string (up to 50 digits): ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    
    if (len == 0 || len > 50) {
        isValid = 0;
    } else {
        
        for (int i = 0; i < len; i++) {
            if (!isdigit(str[i])) {
                isValid = 0;
                break;
            }
        }
    }
    if (isValid) {
        printf("The number string is valid.\n");
    } else {
        printf("The number string is invalid. Please enter only digits up to 50 characters.\n");
    }

    return 0;
}