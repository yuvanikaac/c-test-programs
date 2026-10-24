#include <stdio.h>

int main() {
    int numbers[5], biggest, i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    biggest = numbers[0];
    for (i = 1; i < 5; i++) {
        if (numbers[i] > biggest) {
            biggest = numbers[i];
        }
    }
    printf("The biggest number is: %d\n", biggest);

    return 0;
}