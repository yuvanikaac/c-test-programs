#include <stdio.h>

int main()
{
    int num, hundreds, ones, result;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    hundreds = num / 100;
    ones = num % 10;

    result = num - ((hundreds % 2) * (ones % 2) * 5);

    printf("Result = %d", result);

    return 0;
}