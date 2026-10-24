
#include <stdio.h>
#include <string.h>

int main()
{
    int src[5], dst[5], i;

    printf("Enter 5 integers for the first array: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &src[i]);
    }

    printf("Enter 5 integers for the second array: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &dst[i]);
    }

    if(memcmp(src, dst, sizeof(src)) == 0)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }

    return 0;
}
