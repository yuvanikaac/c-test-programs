#include <stdio.h>

int main() {
    int numbers[5], smallest, i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    smallest = numbers[0];
    for (i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    printf("The smallest number is: %d\n", smallest);

    return 0;
}