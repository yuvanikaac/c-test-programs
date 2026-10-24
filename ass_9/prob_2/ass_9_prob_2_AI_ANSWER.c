
#include <stdio.h>

int main()
{
    int num, sum = 0, i;
    float average;

    for(i = 1; i <= 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum = sum + num;
    }

    average = sum / 5.0;

    printf("Average = %.2f", average);

    return 0;
}
