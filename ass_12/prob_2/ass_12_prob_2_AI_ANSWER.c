
#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Positions: ");

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("%d ", i + 1);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Character not found");
    }

    return 0;
}
