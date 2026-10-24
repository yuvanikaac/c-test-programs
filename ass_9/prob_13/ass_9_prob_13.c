#include <stdio.h>

int main() {
    int numbers[100], count = 0, temp;
    printf("Enter numbers (enter 0 to stop):\n");
    while (1) {
        scanf("%d", &temp);
        if (temp == 0) {
            break;
        }
        numbers[count] = temp;
        count++;
    }
    if (count == 4 && numbers[0] == numbers[3]) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }

    return 0;
}