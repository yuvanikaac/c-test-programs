
#include <stdio.h>

int main()
{
    int num, smallest, i;

    for(i = 1; i <= 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(i == 1)
        {
            smallest = num;
        }
        else if(num < smallest)
        {
            smallest = num;
        }
    }

    printf("Smallest number = %d", smallest);

    return 0;
}
