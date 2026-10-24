#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int first = 1; 
    printf("string: ");
    scanf("%s", str);
    printf("character: ");
    scanf(" %c", &ch);

    printf("Answer: ");

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            if (!first) {
                printf(", ");
            }
            
            printf("%d", i + 1);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}