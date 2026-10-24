#include <stdio.h>

int disp_count_sum14(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_count_sum14(x);
    printf("%d", y);
    return 0;
}

int disp_count_sum14(int a)
{
    int i, count = 0;
    for(i = 0; i < 100000; i++) {
        int temp = i;
        int sum = 0;
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if(sum == 14) {
            count++;
        }
    }
    return count;
}