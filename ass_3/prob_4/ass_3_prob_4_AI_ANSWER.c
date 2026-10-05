#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num > 50) ? printf("Success") : printf("Failure");

    return 0;
}