#include <stdio.h>

int main()
{
    int num, first, second, lastTwo, result;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    first = num / 1000;
    second = (num / 100) % 10;
    lastTwo = num % 100;

    result = (second * 1000) + (first * 100) + lastTwo;

    printf("Result = %d", result);

    return 0;
}