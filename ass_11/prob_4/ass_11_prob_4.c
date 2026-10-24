#include <stdio.h>
int find_2digit_odd_sum7(int result_arr[]) {
    int count = 0;
    for (int i = 10; i <= 99; i++) {
        int tens = i / 10;
        int units = i % 10;
        if ((i % 2 != 0) && (tens + units == 7)) {
            result_arr[count] = i;
            count++;
        }
    }
    return count; 
}

int main() {
    int result_arr[10];
    int count = find_2digit_odd_sum7(result_arr);
    printf("Two-digit odd numbers whose sum of digits is 7:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", result_arr[i]);
    }
    printf("\n");

    return 0;
}