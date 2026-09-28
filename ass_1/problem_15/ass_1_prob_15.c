#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter the number: ");
    scanf("%d", &x);
    
    // x % 10 finds the unit digit. 
    // Subtracting it from the original number makes the last digit 0.
    y = x - (x % 10);
    
    printf("Result= %d\n", y);
    return 0;
}
