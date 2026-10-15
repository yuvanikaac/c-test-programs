
#include <stdio.h>

int main()
{
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        hcf = a;
    }
    else
    {
        hcf = b;
    }

loop:
    if (a % hcf != 0 || b % hcf != 0)
    {
        hcf--;
        goto loop;
    }

    printf("HCF = %d", hcf);

    return 0;
}
