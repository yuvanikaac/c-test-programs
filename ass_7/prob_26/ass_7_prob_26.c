#include <stdio.h>

void disp_biggest_4digit_div7_9(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_biggest_4digit_div7_9(x);
    return 0;
}

void disp_biggest_4digit_div7_9(int x)
{
    int i;
    for (i = 9999; i >= 1000; i--)
    {
        if (i % 7 == 0 && i % 9 == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
}