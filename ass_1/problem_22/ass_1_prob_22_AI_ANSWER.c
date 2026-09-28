#include <stdio.h>

int main()
{
    int num, hundreds, tens, ones, sum, result;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    hundreds = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;

    sum = hundreds + tens + ones;

    result = (sum - 1) % 9 + 1;

    printf("Result = %d", result);

    return 0;
}