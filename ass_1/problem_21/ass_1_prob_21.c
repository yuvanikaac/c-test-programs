#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter a three-digit number: ");
    scanf("%d", &x);
    
    
    int both_odd = (x % 2) * ((x / 100) % 2);
    
    y = x - (both_odd * 5);
    
    printf("Result= %d\n", y);
    return 0;
}
