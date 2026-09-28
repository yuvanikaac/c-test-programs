#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter a two-digit number: ");
    scanf("%d", &x);
    y = (x / 10) + (x % 10);
    
    printf("Result= %d\n", y);
    return 0;
}
