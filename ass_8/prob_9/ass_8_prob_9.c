#include <stdio.h>

int check_last_digit_odd(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = check_last_digit_odd(x);
    printf("%d", y);
    return 0;
}

int check_last_digit_odd(int a)
{
    int temp = a;
    int divisor = 1;
    
    if (temp < 0) {
        temp = -temp;
    }
    
    
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    
    int msb = temp;
    
    
    if (msb % 2 != 0) {
        if (a < 0) {
            a = a + divisor;
        } else {
            a = a - divisor;
        }
    }
    
    return a;
}