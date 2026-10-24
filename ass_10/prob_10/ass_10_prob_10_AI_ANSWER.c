
#include <stdio.h>
#include <string.h>

int main()
{
    char num[51];
    int i, length;

    printf("Enter a number: ");
    scanf("%50s", num);

    length = strlen(num);

    printf("Reversed number = ");

    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", num[i]);
    }

    return 0;
}
