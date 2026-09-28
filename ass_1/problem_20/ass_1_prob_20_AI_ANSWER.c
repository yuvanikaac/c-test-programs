#include <stdio.h>

int main()
{
    int num, tens, ones, sum, result;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    tens = num / 10;
    ones = num % 10;

    sum = tens + ones;

    result = num - ((sum % 2) * 5);

    printf("Result = %d", result);

    return 0;
}