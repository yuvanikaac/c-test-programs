#include <stdio.h>

int disp_rsum(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_rsum(x);
    printf("%d", y);
    return 0;
}

int disp_rsum(int a)
{
    int i, sum = 0;
    for(i = 6; i >= 1; i--) {
        sum += i;
    }
    return sum;
}