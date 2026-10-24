#include <stdio.h>

void count_total_digits()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    printf("Total digits = %d", count);
}

int main()
{
    count_total_digits();

    return 0;
}