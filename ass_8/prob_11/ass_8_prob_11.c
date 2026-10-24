#include <stdio.h>

int disp_total_odd_digits(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_total_odd_digits(x);
    printf("%d", y);
    return 0;
}

int disp_total_odd_digits(int a)
{
    int count = 0;
    if (a < 0) {
        a = -a;
    }
    while (a > 0) {
        int digit = a % 10;
        if (digit % 2 != 0) {
            count++;
        }
        a /= 10;
    }
    return count;
}