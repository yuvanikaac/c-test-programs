#include <stdio.h>
int main() 
{
    int remainder,num,reversed=0;
    printf("Enter a number: ");
    scanf("%d", &num);
loop:
    if (num != 0) 
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
        goto loop; 
    }
    printf("Reverse of the number = %d\n", reversed);

    return 0; 
}
