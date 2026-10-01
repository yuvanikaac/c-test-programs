#include<stdio.h>
int main()
{
    int x,ones,tens,result;
    printf("Enter the four digit number: ");
    scanf("%d",&x);
    tens= ((x/10)%10);
    ones=x%10;
   
    if ((tens != ones) && (tens==ones)){
        result=0;
    }
    else{
        result=1;
    }
    printf("Result=%d",result);
}