#include <stdio.h>

int main() 
{
   int first_digit,last_digit,swapped_num,num,temp,multiplier=1;
    printf("Enter a number: ");
    scanf("%d", &num);

    last_digit = num % 10;
    temp = num;

loop:
    if (temp >= 10) 
    {
        temp = temp / 10;
        multiplier *= 10;
        goto loop; 
    }
    first_digit = temp;
    swapped_num = num - (first_digit * multiplier) - last_digit + (last_digit * multiplier) + first_digit;

    printf("Result = %d\n", swapped_num);

    return 0; 
}
