#include <stdio.h>
int main() 
{
    int units_digit,num,temp,multiplier=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    units_digit = num % 10;
    temp = num;
loop:
    if (temp >= 10) 
    {
        temp = temp / 10;
        multiplier *= 10; 
        goto loop;
    }
    if (units_digit % 2 != 0) 
    {
        num = num - multiplier;
    }
    printf("Output: %d\n", num);

    return 0; 
}
