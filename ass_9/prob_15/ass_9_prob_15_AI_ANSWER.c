
#include <stdio.h>

int main()
{
    int num[100], sumArray[100];
    int n, i = 0, j, digit, sum, temp;

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

    for(j = 0; j < i; j++)
    {
        n = num[j];
        sum = 0;

        while(n != 0)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        sumArray[j] = sum;
    }

    for(j = 0; j < i - 1; j++)
    {
        for(int k = j + 1; k < i; k++)
        {
            if(sumArray[j] > sumArray[k])
            {
                temp = sumArray[j];
                sumArray[j] = sumArray[k];
                sumArray[k] = temp;
            }
        }
    }

    printf("Ascending order of digit sums: ");

    for(j = 0; j < i; j++)
    {
        printf("%d ", sumArray[j]);
    }

    return 0;
}
