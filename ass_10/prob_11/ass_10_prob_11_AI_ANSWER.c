
#include <stdio.h>
#include <string.h>

int main()
{
    char str[51];
    int num[50], i, length;

    printf("Enter a number: ");
    scanf("%50s", str);

    length = strlen(str);

    for(i = 0; i < length; i++)
    {
        num[i] = str[i] - '0';
    }

    printf("Integer array: ");

    for(i = 0; i < length; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
