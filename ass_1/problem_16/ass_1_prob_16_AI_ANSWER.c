#include <stdio.h>

int main()
{
    int num, ones, result;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    ones = num % 10;

    result = 10 + ones;

    printf("Result = %d", result);

    return 0;
}