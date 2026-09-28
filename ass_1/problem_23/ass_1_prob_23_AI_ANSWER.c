#include <stdio.h>

int main()
{
    int num, result;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    result = (num / 100) * 100 + (num % 10);

    printf("Result = %d", result);

    return 0;
}