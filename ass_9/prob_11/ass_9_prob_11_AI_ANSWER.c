
#include <stdio.h>

int main()
{
    int num[5], rev[5], i, digit, sum = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 5; i++)
    {
        int n = num[i];
        rev[i] = 0;

        while(n != 0)
        {
            digit = n % 10;
            rev[i] = rev[i] * 10 + digit;
            n = n / 10;
        }

        sum = sum + rev[i];
    }

    printf("Reversed numbers: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", rev[i]);
    }

    printf("\nSum = %d", sum);

    return 0;
}
