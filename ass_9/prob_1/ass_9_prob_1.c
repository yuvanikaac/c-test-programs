#include <stdio.h>

int main() {
    int numbers[5],i, sum = 0;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("The sum of all numbers is: %d\n", sum);

    return 0;
}