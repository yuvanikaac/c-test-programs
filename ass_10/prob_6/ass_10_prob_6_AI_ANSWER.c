
#include <stdio.h>

int main()
{
    int num, i;
    char str[20];

    printf("Enter an integer: ");
    scanf("%d", &num);

    sprintf(str, "%d", num);

    for(i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}
