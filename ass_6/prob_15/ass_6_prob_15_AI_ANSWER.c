#include <stdio.h>

int main()
{
    int n, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    if (last % 2 == 0)
    {
        printf("%d", n);
    }
    else
    {
        n = n - 1;
        printf("%d", n);
    }

    return 0;
}