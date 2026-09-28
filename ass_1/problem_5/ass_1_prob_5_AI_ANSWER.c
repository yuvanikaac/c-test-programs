#include <stdio.h>

int main()
{
    int num, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    remainder = num % 8;

    printf("Remainder = %d", remainder);

    return 0;
}