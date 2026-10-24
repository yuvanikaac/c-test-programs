#include <stdio.h>

int main() {
    int num;
    int *ptr = &num; 
    printf("Enter a number: ");
    scanf("%d", ptr);
    printf("The original number is: %d\n", *ptr);
    *ptr = *ptr + 10; 
    printf("The changed number (via pointer) is: %d\n", *ptr);

    return 0;
}