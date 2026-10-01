#include <stdio.h>

int main()
{
    int num, firstTwo, lastTwo, result;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    firstTwo = num / 100;
    lastTwo = num % 100;

    result = (firstTwo == lastTwo);

    printf("Result = %d", result);

    return 0;
}