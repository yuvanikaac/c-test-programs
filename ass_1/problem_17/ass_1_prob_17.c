#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter a three-digit number: ");
    scanf("%d", &x);
    
    // (x / 10) * 10 sets the last digit to 0.
    // Adding 2 forces the one's place to become 2.
    y = ((x / 10) * 10) + 2;
    
    printf("Result= %d\n", y);
    return 0;
}
