#include <stdio.h>

void disp_LCM3()
{
    int a, b, c, i;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    i = a;

    if (i < b)
    {
        i = b;
    }

    if (i < c)
    {
        i = c;
    }

    while (1)
    {
        if (i % a == 0 && i % b == 0 && i % c == 0)
        {
            printf("LCM = %d", i);
            break;
        }

        i++;
    }
}

int main()
{
    disp_LCM3();

    return 0;
}