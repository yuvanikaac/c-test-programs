#include <stdio.h>

int main() {
    int numbers[5], reversed_numbers[5], i, sum = 0;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 5; i++) {
        int original = numbers[i];
        int reversed = 0;
        while (original != 0) {
            reversed = reversed * 10 + original % 10;
            original /= 10;
        }
        reversed_numbers[i] = reversed;
    }

    for (i = 0; i < 5; i++) {
        sum += reversed_numbers[i];
    }
    printf("The sum of all numbers in the new array is: %d\n", sum);

    return 0;
}