#include <stdio.h>

int disp_LCM2(int);

int main ()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d", &x);
    y = disp_LCM2(x);
    printf("%d", y);
    return 0;
}

int disp_LCM2(int a)
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
    int gcd = x;
    int lcm = (a * b) / gcd;
    if (lcm < 0) {
        lcm = -lcm;
    }
    return lcm;
}