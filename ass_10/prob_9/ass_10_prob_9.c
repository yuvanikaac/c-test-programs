#include <stdio.h>
#include <string.h>

int main() {
    char str[60];
    printf("Enter a number string (up to 50 digits): ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    
    str[strcspn(str, "\n")] = '\0';

    
    int i = 0;
    while (str[i] == '0') {
        i++;
    }

    
    char *result;
    if (str[i] == '\0') {
        result = "0";
    } else {
        result = &str[i];
    }

    
    printf("The number without leading zeros is: %s\n", result);

    return 0;
}