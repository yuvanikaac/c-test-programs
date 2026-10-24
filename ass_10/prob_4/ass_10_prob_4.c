#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    printf("Enter a number as a string: ");
    fgets(str, sizeof(str), stdin);
    int num = atoi(str);
    printf("The integer value is: %d\n", num);

    return 0;
}