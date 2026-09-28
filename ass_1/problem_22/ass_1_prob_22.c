#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter a three-digit number: ");
    scanf("%d", &x);
    int sum1 = (x / 100) + ((x / 10) % 10) + (x % 10);
    y = (sum1 / 10) + (sum1 % 10);
    printf("Result= %d\n", y);
    return 0;
}
