
#include <stdio.h>

int main()
{
    int num[5] = {8, 15, 12, 7, 9};
    int i, carry = 0, sum;

    for(i = 0; i < 5; i++)
    {
        sum = num[i] + carry;

        num[i] = sum % 10;
        carry = sum / 10;
    }

    printf("Adjusted array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    if(carry > 0)
    {
        printf("%d", carry);
    }

    return 0;
}
