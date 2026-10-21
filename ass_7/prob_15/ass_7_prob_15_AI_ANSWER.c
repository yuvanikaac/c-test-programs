#include <stdio.h>

void check_last_digit_odd()
{
    int n, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    if (last % 2 == 0)
    {
        printf("Result = %d", n);
    }
    else
    {
        n = n - 1;
        printf("Result = %d", n);
    }
}

int main()
{
    check_last_digit_odd();

    return 0;
}