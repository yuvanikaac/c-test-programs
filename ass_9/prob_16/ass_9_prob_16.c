#include <stdio.h>

int main() {
    int num1[50], num2[50], result[51], i, carry, sum;
    for (i = 0; i < 51; i++) {
        result[i] = 0;
    }
    printf("Enter 50 digits for the first number (digit by digit):\n");
    for (i = 0; i < 50; i++) {
        scanf("%d", &num1[i]);
    }
    printf("Enter 50 digits for the second number (digit by digit):\n");
    for (i = 0; i < 50; i++) {
        scanf("%d", &num2[i]);
    }
    carry = 0;
    for (i = 49; i >= 0; i--) {
        sum = num1[i] + num2[i] + carry;
        result[i + 1] = sum % 10;
        carry = sum / 10;
    }
    result[0] = carry; 
    printf("The resulting 51-digit array is:\n");
    for (i = 0; i < 51; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}