
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], sub[100];
    int i, j, found = 0;

    printf("Enter the main string: ");
    scanf("%99s", str);

    printf("Enter the substring: ");
    scanf("%99s", sub);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; sub[j] != '\0'; j++)
        {
            if(str[i + j] != sub[j])
            {
                break;
            }
        }

        if(sub[j] == '\0')
        {
            printf("Position = %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Substring not found");
    }

    return 0;
}
