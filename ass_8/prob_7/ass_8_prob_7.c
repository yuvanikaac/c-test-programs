#include <stdio.h>

int disp_reverse_number(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_reverse_number(x);
    printf("%d", y);
    return 0;
}

int disp_reverse_number(int a)
{
    int rev = 0;
    while (a != 0) {
        rev = rev * 10 + (a % 10);
        a /= 10;
    }
    return rev;
}