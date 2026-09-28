#include <stdio.h>

int main()
{
    int num, tens;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    tens = (num / 10) % 10;

    printf("Ten's digit = %d", tens);

    return 0;
}