#include <stdio.h>

int main()
{
    int a, b, c, lcm;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    lcm = a;

    if (b > lcm)
    {
        lcm = b;
    }

    if (c > lcm)
    {
        lcm = c;
    }

    while (lcm % a != 0 || lcm % b != 0 || lcm % c != 0)
    {
        lcm++;
    }

    printf("LCM = %d", lcm);

    return 0;
}