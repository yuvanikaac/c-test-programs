#include <stdio.h>

int disp_two_digit_square(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_two_digit_square(x);
    printf("%d", y);
    return 0;
}

int disp_two_digit_square(int a)
{
    int i, count = 0;
    for(i = 10; i <= 99; i++) {
        int root = 1;
        while(root * root < i) {
            root++;
        }
        if(root * root == i) {
            count++;
        }
    }
    return count;
}