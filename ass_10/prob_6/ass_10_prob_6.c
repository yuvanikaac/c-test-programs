#include <stdio.h>

int main() {
    int num;
    char str[100];
    printf("Enter an integer: ");
    scanf("%d", &num);
    sprintf(str, "%d", num);
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}