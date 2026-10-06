#include <stdio.h>

int main() {
    int x;
    char *result;
    printf("Enter a four-digit number: ");
    scanf("%d", &x);
    
    int first_two = x / 100;
    int last_two = x % 100;

    if (first_two == last_two) {
        result = "Success";
    } else {
        result = "Failure";
    }
    
    printf("Result= %s\n", result);
    return 0;
}
