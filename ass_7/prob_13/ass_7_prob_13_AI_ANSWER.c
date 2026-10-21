#include <stdio.h>

void disp_reverse_number()
{
    int n, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("Reverse = %d", reverse);
}

int main()
{
    disp_reverse_number();

    return 0;
}