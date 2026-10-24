#include <stdio.h>

int disp_2digit_odd_sum_tens7(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_2digit_odd_sum_tens7(x);
    printf("%d", y);
    return 0;
}

int disp_2digit_odd_sum_tens7(int a)
{
    int i, sum = 0;
    for(i = 71; i <= 79; i += 2) {
        sum += i;
    }
    return sum;
}