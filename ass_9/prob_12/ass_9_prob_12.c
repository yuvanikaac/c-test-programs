#include <stdio.h>

int main() {
    int numbers[100], i = 0, sum = 0, count = 0;
    printf("Enter numbers (enter 0 to stop):\n");
    while (1) {
        int temp;
        scanf("%d", &temp);
        if (temp == 0) {
            break;
        }
        numbers[i] = temp;
        sum += numbers[i];
        i++;
        count++;
    }
    printf("Total numbers entered: %d\n", count);
    printf("Sum of numbers: %d\n", sum);

    return 0;
}