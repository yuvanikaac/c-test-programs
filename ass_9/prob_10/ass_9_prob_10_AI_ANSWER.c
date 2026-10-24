
#include <stdio.h>

int main()
{
    int num[5], result[5], i, j, k, prime;

    for(i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    j = 0;

    for(i = 0; i < 5; i++)
    {
        prime = 1;

        if(num[i] <= 1)
        {
            prime = 0;
        }
        else
        {
            for(k = 2; k < num[i]; k++)
            {
                if(num[i] % k == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        if(prime == 0)
        {
            result[j] = num[i];
            j++;
        }
    }

    printf("Numbers after removing primes: ");

    for(i = 0; i < j; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}
