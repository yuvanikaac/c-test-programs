#include <stdio.h>

void disp_descend()
{
    int i = 5;

    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    disp_descend();

    return 0;
}