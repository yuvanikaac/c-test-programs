#include <stdio.h>

int disp_single_digit_square(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_single_digit_square(x);
    printf("%d", y);
    return 0;
}

int disp_single_digit_square(int a)
{
    int i, count = 0;
    for(i = 0; i <= 9; i++) {
        if(i == 0 || i == 1 || i == 4 || i == 9) {
            count++;
        }
    }
    return count;
}