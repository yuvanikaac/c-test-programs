#include<stdio.h> 

int main() { 
    int x, y; 
    printf("Enter a four-digit number: "); 
    scanf("%d", &x); 
    
    // Separates the first two digits and the last two digits
    int first_two = x / 100;
    int last_two = x % 100;
    
    // Reverses the first two digits
    int reversed_first_two = (first_two % 10) * 10 + (first_two / 10);
    
    // Combines them back into a four-digit number
    y = (reversed_first_two * 100) + last_two; 
    
    printf("Result= %d", y); 
    return 0;
}
