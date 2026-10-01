#include<stdio.h>
int main()
{
    int x,ones,tens,result;
    printf("Enter the two digit number: ");
    scanf("%d",&x);
    tens= x/10;
    ones=x%10;
    if (tens >= ones){
        result=1;
    }
    else{
        result=0;
    }
    printf("Result=%d",result);
}