#include <stdio.h>

int disp_count_HCF2(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_count_HCF2(x);
    printf("%d", y);
    return 0;
}

int disp_count_HCF2(int a)
{
    int b;
    printf("Enter another number: ");
    scanf("%d", &b);
    
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    if (x < 0) {
        x = -x;
    }
    return x;
}