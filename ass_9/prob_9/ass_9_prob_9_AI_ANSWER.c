
#include <stdio.h>

int main()
{
    int num[5], odd[5], i, j = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(num[i] % 2 != 0)
        {
            odd[j] = num[i];
            j++;
        }
    }

    printf("Odd numbers: ");

    for(i = 0; i < j; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
