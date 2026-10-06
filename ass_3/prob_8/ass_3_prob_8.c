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
        result = "Failure";
    } else {
        result = "Success";
    }
    
    printf("Result= %s\n", result);
    return 0;
}
