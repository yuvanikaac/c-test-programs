#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter the number: ");
    scanf("%d", &x);
    if (x > 50) {
        y = 1;
    } else {
        y = 0;
    }
    
    printf("Result= %d\n", y);
    return 0;
}
