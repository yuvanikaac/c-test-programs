#include <stdio.h>

void disp_assend()
{
    int i = 1;

    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }
}

int main()
{
    disp_assend();

    return 0;
}