#include <stdio.h>

int main()
{
    int num, hundreds, tens, ones, reverse;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    hundreds = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;

    reverse = (ones * 100) + (tens * 10) + hundreds;

    printf("Reverse = %d", reverse);

    return 0;
}