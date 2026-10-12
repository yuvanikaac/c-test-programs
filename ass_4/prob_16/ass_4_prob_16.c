#include <stdio.h>

int main() 
{    
    int is_prime = 1,i = 2,num; 
    printf("Enter a number: ");
    scanf("%d", &num);   
    if (num <= 1) 
    {
        is_prime = 0;
        goto end;
    }
loop:
   
    if (i * i <= num) 
    {
        if (num % i == 0) 
        {
            is_prime = 0; 
            goto end;     
        }
        i++;
        goto loop; 
    }
end:
    if (is_prime == 1) 
    {
        printf("%d is a prime number.\n", num);
    } 
    else 
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0; 
}
