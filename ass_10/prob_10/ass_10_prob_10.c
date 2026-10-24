#include <stdio.h>
#include <string.h>

int main() {
    char str[60];

    
    printf("Enter a number (up to 50 digits): ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    
    printf("The reversed number is: %s\n", str);

    return 0;
}