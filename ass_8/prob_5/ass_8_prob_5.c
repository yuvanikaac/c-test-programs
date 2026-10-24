#include <stdio.h>

int count_total_digits(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = count_total_digits(x);
    printf("%d", y);
    return 0;
}

int count_total_digits(int a)
{
    int count = 0;
    if (a == 0) {
        return 1;
    }
    if (a < 0) {
        a = -a;
    }
    while (a > 0) {
        count++;
        a /= 10;
    }
    return count;
}