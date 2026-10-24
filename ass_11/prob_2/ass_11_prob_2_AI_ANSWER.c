
#include <stdio.h>

void increment(int num[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        num[i] = num[i] + 1;
    }
}

int main()
{
    int num[5], i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    increment(num, 5);

    printf("Array after incrementing: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
