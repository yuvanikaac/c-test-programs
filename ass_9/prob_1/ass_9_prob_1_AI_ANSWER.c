
#include <stdio.h>

int main()
{
    int num, sum = 0, i;

    for(i = 1; i <= 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum = sum + num;
    }

    printf("Sum = %d", sum);

    return 0;
}
