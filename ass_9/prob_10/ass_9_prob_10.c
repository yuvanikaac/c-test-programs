#include <stdio.h>

int main() {
    int numbers[5], non_prime_numbers[5], i, j, k, count = 0; 
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 5; i++) {
        int n = numbers[i];
        int is_prime = 1;

        if (n <= 1) {
            is_prime = 0; 
        } else {
            for (k = 2; k * k <= n; k++) {
                if (n % k == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }

        if (!is_prime) {
            non_prime_numbers[count] = n;
            count++;
        }
    }

    printf("The new array with prime numbers removed is:\n");
    for (i = 0; i < count; i++) {
        printf("%d ", non_prime_numbers[i]);
    }
    printf("\n");

    return 0;
}