
#include <stdio.h>

int main()
{
    int num[100], n, i = 0;
    float average;

    while(1)
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);

        if(n == 0)
        {
            break;
        }

        num[i] = n;
        i++;
    }

    if(i == 0)
    {
        printf("No numbers entered");
    }
    else if(i % 2 != 0)
    {
        printf("Middle number = %d", num[i / 2]);
    }
    else
    {
        average = (num[i / 2 - 1] + num[i / 2]) / 2.0;
        printf("Average of middle two numbers = %.2f", average);
    }

    return 0;
}
