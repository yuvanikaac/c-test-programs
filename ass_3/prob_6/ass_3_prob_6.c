#include<stdio.h>
int main()
{
    int num1;
    char *result;
    printf("Enter the number: ");
    scanf("%d",&num1);
    
    
    if (num1>=50){
        result="Success";
    }
    else{
        result="Failure";
    }
    printf("Result=%s",result);
}
    
