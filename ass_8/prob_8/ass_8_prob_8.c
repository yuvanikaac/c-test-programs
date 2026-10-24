#include <stdio.h>

int disp_interchange_first_last_digit(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_interchange_first_last_digit(x);
    printf("%d", y);
    return 0;
}

int disp_interchange_first_last_digit(int a)
{
    if (a < 10 && a > -10) {
        return a;
    }
    
    int last_digit = a % 10;
    int temp = a;
    int divisor = 1;
    
    while (temp >= 10 || temp <= -10) {
        temp /= 10;
        divisor *= 10;
    }
    int first_digit = temp;
    
    int middle = (a % divisor) / 10;
    int result = last_digit * divisor + middle * 10 + first_digit;
    
    return result;
}