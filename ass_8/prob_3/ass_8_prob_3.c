#include <stdio.h>

int disp_2digit_ones5(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_2digit_ones5(x);
    printf("%d", y);
    return 0;
}

int disp_2digit_ones5(int a)
{
    int i, sum = 0;
    for(i = 15; i <= 95; i += 10) {
        sum += i;
    }
    return sum;
}