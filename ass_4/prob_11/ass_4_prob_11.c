#include <stdio.h>

int main() 
{
    long long num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num == 0) 
    {
        count = 1;
        goto end;
    }

loop:
    if (num != 0) 
    {
        num = num / 10;
        count++;
        goto loop; 
    }

end:
    printf("Output - %d\n", count);

    return 0; 
}
