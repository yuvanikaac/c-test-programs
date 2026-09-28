#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter a three-digit number: ");
    scanf("%d", &x);
    y = x - (((x / 10) % 10) * 10);
    printf("Result= %d\n", y);
    return 0;
}
