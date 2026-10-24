#include <stdio.h>

int main() {
    char ch;
    printf("Enter a single number (0-9): ");
    scanf("%c", &ch);
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}