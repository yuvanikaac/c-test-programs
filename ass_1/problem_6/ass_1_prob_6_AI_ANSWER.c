#include <stdio.h>

int main()
{
    int num, ones;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    ones = num % 10;

    printf("One's digit = %d", ones);

    return 0;
}