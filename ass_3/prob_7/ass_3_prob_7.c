#include<stdio.h>

int main()
{
    int x;
    char *result;
    printf("Enter a two-digit number: ");
    scanf("%d", &x);
    
    
    int tens = x / 10;
    int ones = x % 10;
    
   
    if (tens == ones) {
        result = "Success";
    } else {
        result = "Failure";
    }
    
    printf("Result= %s\n", result);
    return 0;
}
