
#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Original number = %d\n", num);

    *ptr = *ptr + 10;

    printf("Changed number = %d", num);

    return 0;
}
