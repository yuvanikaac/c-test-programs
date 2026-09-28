#include <stdio.h>

int main()
{
    int num, tens, ones, sum;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    tens = num / 10;
    ones = num % 10;

    sum = tens + ones;

    printf("Sum of digits = %d", sum);

    return 0;
}