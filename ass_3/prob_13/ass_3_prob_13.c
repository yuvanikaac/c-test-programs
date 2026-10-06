#include <stdio.h>

int main() {
    int x;
    char *result;

    printf("Enter a three-digit number: ");
    scanf("%d", &x);
    
    int num0 = x % 10;
    int num1 = (x / 10) % 10;
    
    if ((num1 == num0) && (num1 != num0)) {
        result = "Success";
    } else {
        result = "Failure";
    }
    
    printf("Result= %s\n", result);
    return 0;
}
