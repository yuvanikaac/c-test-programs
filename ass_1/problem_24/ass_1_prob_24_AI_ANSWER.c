#include <stdio.h>

int main()
{
    int num, firstTwo, tens, ones, result;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    firstTwo = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;

    result = (firstTwo * 100) + (ones * 10) + tens;

    printf("Result = %d", result);

    return 0;
}