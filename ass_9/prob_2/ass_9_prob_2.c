#include <stdio.h>

int main() {
    int numbers[5],sum = 0, average = 0, i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    average = sum / 5;

    printf("The average of all numbers is: %d\n", average);

    return 0;
}