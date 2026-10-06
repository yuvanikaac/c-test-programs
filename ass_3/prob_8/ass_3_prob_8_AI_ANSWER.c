#include <stdio.h>

int main()
{
    int num, tens, ones;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    tens = num / 10;
    ones = num % 10;

    (tens == ones) ? printf("Failure") : printf("Success");

    return 0;
}