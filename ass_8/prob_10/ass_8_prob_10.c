#include <stdio.h>

int disp_2digit_even_sum6(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_2digit_even_sum6(x);
    printf("%d", y);
    return 0;
}

int disp_2digit_even_sum6(int a)
{
    int i, count = 0;
    for (i = 2; i <= 9; i++) {
        if (i == 2 || i == 3 || i == 5 || i == 7) {
            count++;
        }
    }
    return count;
}