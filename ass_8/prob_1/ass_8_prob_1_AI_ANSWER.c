#include <stdio.h>

void disp_sum()
{
    int i = 1, sum = 0;

    while (i <= 5)
    {
        sum = sum + i;
        i++;
    }

    printf("Sum = %d", sum);
}

int main()
{
    disp_sum();

    return 0;
}