
#include <stdio.h>
#include <string.h>

int main()
{
    char src[100], dst[100];

    printf("Enter a string: ");
    scanf("%99s", src);

    strcpy(dst, src);

    printf("Copied string = %s", dst);

    return 0;
}
