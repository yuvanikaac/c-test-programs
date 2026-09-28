#include <stdio.h>

int main()
{
    int num, hundreds;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    hundreds = (num / 100) % 10;

    printf("Hundred's digit = %d", hundreds);

    return 0;
}