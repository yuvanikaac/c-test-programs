#include<stdio.h>
int main()
{
    int x,num1,num2,result;
    printf("Enter the 4 digit number: ");
    scanf("%d",&x);
    num1= x/100;
    num2=x%100;

    
    if (num1 == num2){
        result=1;
    }
    else{
        result=0;
    }
    printf("Result=%d",result);
}
    
