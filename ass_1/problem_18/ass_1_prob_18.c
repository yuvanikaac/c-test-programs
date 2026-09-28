#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter the number: ");
    scanf("%d", &x);
    
    // x % 2 is 1 if the number is odd, and 0 if it is even.
    // Multiplying it by 5 subtracts 5 only when the number is odd.
    y = x - (x % 2) * 5;
    
    printf("Result= %d\n", y);
    return 0;
}
