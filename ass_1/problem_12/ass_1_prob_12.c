
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the number: ");
    scanf("%d",&x);
    y=(x % 10) * 10 + (x / 10);
    printf("Result= %d",y);
}