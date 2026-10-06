#include <stdio.h>

int main()
{
    int num, firstTwo, lastTwo;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    firstTwo = num / 100;
    lastTwo = num % 100;

    (firstTwo == lastTwo) ? printf("Success") : printf("Failure");

    return 0;
}