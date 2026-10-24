#include <stdio.h>

int disp_sum(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_sum(x);
    printf("%d", y);
    return 0;
}

int disp_sum(int a)
{
    int i, sum = 0;
    for(i = 1; i <= 5; i++) {
        sum += i;
    }
    return sum;
}