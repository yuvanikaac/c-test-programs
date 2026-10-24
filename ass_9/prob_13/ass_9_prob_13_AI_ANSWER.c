
#include <stdio.h>

int main()
{
    int num[100], n, i = 0;

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

    if(i == 4 && num[0] == num[3])
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }

    return 0;
}
