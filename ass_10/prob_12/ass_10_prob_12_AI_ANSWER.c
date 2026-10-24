
#include <stdio.h>

int main()
{
    int num[50], i, n;
    char str[51];

    printf("Enter the number of digits: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for(i = 0; i < n; i++)
    {
        str[i] = num[i] + '0';
    }

    str[i] = '\0';

    printf("String = %s", str);

    return 0;
}
