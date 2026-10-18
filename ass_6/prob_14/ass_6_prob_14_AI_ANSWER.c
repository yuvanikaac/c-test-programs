#include <stdio.h>

int main()
{
    int n, temp, first, last, count = 0, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        count++;
    }

    first = temp;

    while (count > 0)
    {
        power = power * 10;
        count--;
    }

    result = last * power + (n % power / 10) * 10 + first;

    printf("Result = %d", result);

    return 0;
}