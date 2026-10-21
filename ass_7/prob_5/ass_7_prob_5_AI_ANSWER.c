#include <stdio.h>

void disp_odd()
{
    int i = 1;

    while (i <= 9)
    {
        printf("%d\n", i);
        i = i + 2;
    }
}

int main()
{
    disp_odd();

    return 0;
}