#include <stdio.h>

int disp_sum_all_digits(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_sum_all_digits(x);
    printf("%d", y);
    return 0;
}

int disp_sum_all_digits(int a)
{
    int sum = 0;
    if (a < 0) {
        a = -a;
    }
    while (a > 0) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}