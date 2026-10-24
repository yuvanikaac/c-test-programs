#include <stdio.h>

int main() {
    int numbers[100], digit_sums[100], count = 0, i, j, temp;
    printf("Enter numbers (enter 0 to stop):\n");
    while (1) {
        int temp_num;
        scanf("%d", &temp_num);
        if (temp_num == 0) {
            break;
        }
        numbers[count] = temp_num;
        count++;
    }

    if (count == 0) {
        printf("No numbers were entered.\n");
        return 0;
    }

    for (i = 0; i < count; i++) {
        int num = numbers[i];
        int sum = 0;
        if (num < 0) {
            num = -num; // Handle negative numbers
        }
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        digit_sums[i] = sum;
    }
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - 1 - i; j++) {
            if (digit_sums[j] > digit_sums[j + 1]) {
                temp = digit_sums[j];
                digit_sums[j] = digit_sums[j + 1];
                digit_sums[j + 1] = temp;
            }
        }
    }
    printf("The new array of digit sums in ascending order is:\n");
    for (i = 0; i < count; i++) {
        printf("%d ", digit_sums[i]);
    }
    printf("\n");

    return 0;
}