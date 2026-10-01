#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter a two-digit number: ");
    scanf("%d", &x);
    
    
    int tens = x / 10;
    int ones = x % 10;
    
   
    if (tens > ones) {
        y = 1;
    } else {
        y = 0;
    }
    
    printf("Result= %d\n", y);
    return 0;
}
