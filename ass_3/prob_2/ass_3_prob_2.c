#include<stdio.h>
int main()
{
    int num1;
    char *result;
    printf("Enter the number: ");
    scanf("%d",&num1);
    
    
    if (num1==50){
        result="Failure";
    }
    else{
        result="Success";
    }
    printf("Result=%s",result);
}
    
