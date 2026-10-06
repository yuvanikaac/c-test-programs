#include <stdio.h>

int main()
{
    int num, digit1, digit0, result;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    digit1 = (num / 10) % 10;
    digit0 = num % 10;

    result = (digit1 == digit0) || (digit1 != digit0);

    (result == 1) ? printf("Success") : printf("Failure");

    return 0;
}