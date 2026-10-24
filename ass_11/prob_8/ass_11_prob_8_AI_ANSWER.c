
#include <stdio.h>
#include <string.h>

int main()
{
    char src[100], dst[100];

    printf("Enter the first string: ");
    scanf("%99s", src);

    printf("Enter the second string: ");
    scanf("%99s", dst);

    if(strcmp(src, dst) == 0)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }

    return 0;
}
