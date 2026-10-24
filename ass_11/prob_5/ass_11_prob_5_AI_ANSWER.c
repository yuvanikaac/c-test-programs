
#include <stdio.h>
#include <string.h>

int main()
{
    int src[5], dst[5], i;

    printf("Enter 5 integers: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &src[i]);
    }

    memcpy(dst, src, sizeof(src));

    printf("Copied array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", dst[i]);
    }

    return 0;
}
