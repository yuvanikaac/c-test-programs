#include <stdio.h>

int disp_LCM3(int);

int main ()
{
    int x, y;
    pritnf("Enter a number: ");
    scanf("%d", &x);
    y = disp_LCM3(x);
    printf("%d", y);
    return 0;
}

int disp_LCM3(int a)
{
    int b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &b, &c);
    int temp1 = a, temp2 = b;
    while (temp2 != 0) {
        int temp = temp2;
        temp2 = temp1 % temp2;
        temp1 = temp;
    }
    int gcd1 = temp1;
    int lcm1 = (a * b) / gcd1;
    if (lcm1 < 0) {
        lcm1 = -lcm1;
    }
    
    
    int temp3 = lcm1, temp4 = c;
    while (temp4 != 0) {
        int temp = temp4;
        temp4 = temp3 % temp4;
        temp3 = temp;
    }
    int gcd2 = temp3;
    int lcm2 = (lcm1 * c) / gcd2;
    if (lcm2 < 0) {
        lcm2 = -lcm2;
    }
    
    return lcm2;
}