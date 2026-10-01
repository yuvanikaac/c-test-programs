#include <stdio.h>

int main()
{
    int num, tens, ones, result;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    tens = num / 10;
    ones = num % 10;

    result = (tens > ones);

    printf("Result = %d", result);

    return 0;
}