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

    if (count == 0) {
        printf("No numbers were entered.\n");
        return 0;
    }
    if (count % 2 != 0) {
        int middle_index = count / 2;
        printf("The middle number is: %d\n", numbers[middle_index]);
    } else {
        int mid2 = count / 2;
        int mid1 = mid2 - 1;
        int average = (numbers[mid1] + numbers[mid2]) / 2;
        printf("The average of the middle two numbers is: %d\n", average);
    }

    return 0;
}