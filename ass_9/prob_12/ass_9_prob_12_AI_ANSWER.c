
#include <stdio.h>

int main()
{
    int num[100], i = 0, sum = 0, n;

    while(1)
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);

        if(n == 0)
        {
            break;
        }

        num[i] = n;
        sum = sum + n;
        i++;
    }

    printf("Total numbers entered = %d", i);
    printf("\nSum of numbers = %d", sum);

    return 0;
}
