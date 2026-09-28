#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter a two-digit number: ");
    scanf("%d", &x);
    
    // (x % 10) extracts the unit digit.
    // Adding 10 sets the ten's place digit to 1.
    y = 10 + (x % 10);
    
    printf("Result= %d\n", y);
    return 0;
}
