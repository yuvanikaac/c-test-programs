#include <stdio.h>

void disp_LCM2()
{
    int a, b, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    i = (a > b) ? a : b;

    while (1)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("LCM = %d", i);
            break;
        }

        i++;
    }
}

int main()
{
    disp_LCM2();

    return 0;
}