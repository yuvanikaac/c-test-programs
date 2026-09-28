#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter a four-digit number: ");
    scanf("%d", &x);
    
    int first_two = x / 100;
    int last_two = x % 100;
    
    int reversed_last_two = (last_two % 10) * 10 + (last_two / 10);
    
    y = (first_two * 100) + reversed_last_two;
    
    printf("Result= %d\n", y);
    return 0;
}
