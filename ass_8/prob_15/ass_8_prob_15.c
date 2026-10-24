#include <stdio.h>

int disp_single_digit_prime(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_single_digit_prime(x);
    printf("%d", y);
    return 0;
}

int disp_single_digit_prime(int a)
{
    int count = 0;
    if (a < 0) {
        a = -a;
    }
    if (a == 0) {
        return 0;
    }
    while (a > 0) {
        int digit = a % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            count++;
        }
        a /= 10;
    }
    return count;
}