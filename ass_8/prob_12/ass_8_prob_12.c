#include <stdio.h>

int disp_total_2digit_odd(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_total_2digit_odd(x);
    printf("%d", y);
    return 0;
}

int disp_total_2digit_odd(int a)
{
    int i, count = 0;
    for(i = 11; i <= 99; i += 2) {
        count++;
    }
    return count;
}