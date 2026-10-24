
#include <stdio.h>

int main()
{
    int num, biggest, i;

    for(i = 1; i <= 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(i == 1)
        {
            biggest = num;
        }
        else if(num > biggest)
        {
            biggest = num;
        }
    }

    printf("Biggest number = %d", biggest);

    return 0;
}
