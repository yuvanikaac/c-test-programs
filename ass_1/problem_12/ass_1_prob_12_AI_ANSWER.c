#include <stdio.h>

int main()
{
    int num, tens, ones, reverse;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    tens = num / 10;
    ones = num % 10;

    reverse = (ones * 10) + tens;

    printf("Reverse = %d", reverse);

    return 0;
}