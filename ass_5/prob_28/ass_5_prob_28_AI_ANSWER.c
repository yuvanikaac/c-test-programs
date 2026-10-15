
#include <stdio.h>

int main()
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        lcm = a;
    }
    else
    {
        lcm = b;
    }

loop:
    if (lcm % a != 0 || lcm % b != 0)
    {
        lcm++;
        goto loop;
    }

    printf("LCM = %d", lcm);

    return 0;
}
