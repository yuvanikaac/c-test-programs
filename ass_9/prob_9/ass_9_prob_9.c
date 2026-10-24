#include <stdio.h>

int main() {
    int numbers[5], odd_numbers[5], i, j = 0; 
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            odd_numbers[j] = numbers[i];
            j++;
        }
    }

    printf("The new array with even numbers removed is:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", odd_numbers[i]);
    }
    printf("\n");

    return 0;
}