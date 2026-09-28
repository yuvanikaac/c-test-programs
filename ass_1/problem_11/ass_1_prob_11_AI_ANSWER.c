#include <stdio.h>

int main()
{
    int num, hundreds, tens, ones, sum;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    hundreds = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;

    sum = hundreds + tens + ones;

    printf("Sum of digits = %d", sum);

    return 0;
}