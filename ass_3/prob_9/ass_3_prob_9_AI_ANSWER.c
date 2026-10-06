#include <stdio.h>

int main()
{
    int num, tens, ones;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    tens = num / 10;
    ones = num % 10;

    (ones < tens) ? printf("Success") : printf("Failure");

    return 0;
}