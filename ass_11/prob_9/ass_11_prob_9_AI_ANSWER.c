
#include <stdio.h>

void intcon(int src1[], int size1, int src2[], int size2, int dst[])
{
    int i, j;

    for(i = 0; i < size1; i++)
    {
        dst[i] = src1[i];
    }

    for(j = 0; j < size2; j++)
    {
        dst[i] = src2[j];
        i++;
    }
}

int main()
{
    int src1[5], src2[5], dst[10];
    int i;

    printf("Enter 5 elements for the first array: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &src1[i]);
    }

    printf("Enter 5 elements for the second array: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &src2[i]);
    }

    intcon(src1, 5, src2, 5, dst);

    printf("Concatenated array: ");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", dst[i]);
    }

    return 0;
}
