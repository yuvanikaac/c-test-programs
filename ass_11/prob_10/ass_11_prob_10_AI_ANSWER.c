
#include <stdio.h>
#include <string.h>

void strcon(char src1[], char src2[], char dst[])
{
    int i, j;

    for(i = 0; src1[i] != '\0'; i++)
    {
        dst[i] = src1[i];
    }

    for(j = 0; src2[j] != '\0'; j++)
    {
        dst[i] = src2[j];
        i++;
    }

    dst[i] = '\0';
}

int main()
{
    char src1[100], src2[100], dst[200];

    printf("Enter the first string: ");
    scanf("%99s", src1);

    printf("Enter the second string: ");
    scanf("%99s", src2);

    strcon(src1, src2, dst);

    printf("Concatenated string = %s", dst);

    return 0;
}
