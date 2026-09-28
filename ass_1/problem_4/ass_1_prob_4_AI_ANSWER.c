#include <stdio.h>

int main()
{
    int num;
    float result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = num / 6.0;

    printf("Result = %.2f", result);

    return 0;
}