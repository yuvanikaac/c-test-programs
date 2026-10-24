#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}