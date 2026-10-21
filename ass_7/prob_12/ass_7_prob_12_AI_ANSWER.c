#include <stdio.h>

void disp_sum_all_digits()
{
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);
}

int main()
{
    disp_sum_all_digits();

    return 0;
}