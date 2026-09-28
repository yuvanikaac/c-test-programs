#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter a two-digit number: ");
    scanf("%d", &x);
    
    int sum = (x / 10) + (x % 10);
    y = x - (sum % 2) * 5;
    
    printf("Result= %d\n", y);
    return 0;
}
