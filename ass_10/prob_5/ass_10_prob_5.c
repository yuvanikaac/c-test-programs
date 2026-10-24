#include <stdio.h>

int main() {
    int num;
    char str[100];
    printf("Enter an integer: ");
    scanf("%d", &num);
    sprintf(str, "%d", num);
    printf("The integer as a string is: %s\n", str);

    return 0;
}